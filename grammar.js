module.exports = grammar({
  name: "restedlang",

  rules: {
    source_file: ($) => repeat($.item),
    item: ($) =>
      choice(
        $._declaration,
        $._expression,
        $.attribute,
        $.request,
        $.line_comment
      ),

    request: ($) => seq($.request_method, $.endpoint, optional($.block)),
    request_method: (_$) => choice("get", "post", "put", "patch", "delete"),
    endpoint: ($) => choice($._expression, $.url_literal, $.pathname_literal),
    url_literal: (_$) => /https?:.*/,
    pathname_literal: (_$) => /\/.*/,

    _declaration: ($) => choice($.constant_declaration, $.variable_declaration),
    constant_declaration: ($) =>
      seq("set", $.constant_identifier, $._expression),
    variable_declaration: ($) => seq("let", $.identifer, "=", $._expression),

    attribute: ($) => seq("@", $.identifer, optional($.parameter_list)),

    _expression: ($) =>
      choice(
        $.call,
        $.identifer,
        $.number,
        $.string,
        $.template_string,
        $.boolean,
        "null"
      ),
    identifer: (_$) => /[a-z_][_\w]*/,
    constant_identifier: (_$) => /[A-Z_][A-Z_\d]*/,
    number: (_$) => /\d+(\.\d*)?/,
    boolean: (_$) => choice("true", "false"),
    string: (_$) => seq('"', /[^"]*/, '"'),
    template_string: ($) =>
      seq("`", repeat(choice($.template_chars, $.template_substitution)), "`"),
    template_chars: (_$) => choice(/[^`${]+/, /\$/),
    template_substitution: ($) => seq("${", $._expression, "}"),
    call: ($) => prec(1, seq($._expression, $.parameter_list)),

    parameter_list: ($) =>
      seq("(", optional(choice($._expression, $.line_comment)), ")"),

    block: ($) => seq("{", repeat($._statement), "}"),

    _statement: ($) =>
      choice($.header_statement, $.body_statement, $.line_comment),
    header_statement: ($) => seq("header", $.string, $._expression),
    body_statement: ($) => seq("body", $._expression),

    line_comment: (_$) => seq("//", /.*/, "\n"),
  },
});
