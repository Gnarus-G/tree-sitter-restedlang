#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_get = 1,
  anon_sym_post = 2,
  anon_sym_put = 3,
  anon_sym_patch = 4,
  anon_sym_delete = 5,
  sym_url_literal = 6,
  sym_pathname_literal = 7,
  anon_sym_set = 8,
  anon_sym_let = 9,
  anon_sym_EQ = 10,
  anon_sym_AT = 11,
  anon_sym_null = 12,
  sym_identifer = 13,
  sym_constant_identifier = 14,
  sym_number = 15,
  anon_sym_true = 16,
  anon_sym_false = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_string_token1 = 19,
  anon_sym_BQUOTE = 20,
  aux_sym_template_chars_token1 = 21,
  aux_sym_template_chars_token2 = 22,
  anon_sym_DOLLAR_LBRACE = 23,
  anon_sym_RBRACE = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  anon_sym_LBRACE = 27,
  anon_sym_header = 28,
  anon_sym_body = 29,
  anon_sym_SLASH_SLASH = 30,
  aux_sym_line_comment_token1 = 31,
  anon_sym_LF = 32,
  sym_source_file = 33,
  sym_item = 34,
  sym_request = 35,
  sym_request_method = 36,
  sym_endpoint = 37,
  sym__declaration = 38,
  sym_constant_declaration = 39,
  sym_variable_declaration = 40,
  sym_attribute = 41,
  sym__expression = 42,
  sym_boolean = 43,
  sym_string = 44,
  sym_template_string = 45,
  sym_template_chars = 46,
  sym_template_substitution = 47,
  sym_call = 48,
  sym_parameter_list = 49,
  sym_block = 50,
  sym__statement = 51,
  sym_header_statement = 52,
  sym_body_statement = 53,
  sym_line_comment = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_template_string_repeat1 = 56,
  aux_sym_block_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_get] = "get",
  [anon_sym_post] = "post",
  [anon_sym_put] = "put",
  [anon_sym_patch] = "patch",
  [anon_sym_delete] = "delete",
  [sym_url_literal] = "url_literal",
  [sym_pathname_literal] = "pathname_literal",
  [anon_sym_set] = "set",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_AT] = "@",
  [anon_sym_null] = "null",
  [sym_identifer] = "identifer",
  [sym_constant_identifier] = "constant_identifier",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_template_chars_token1] = "template_chars_token1",
  [aux_sym_template_chars_token2] = "template_chars_token2",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_header] = "header",
  [anon_sym_body] = "body",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_LF] = "\n",
  [sym_source_file] = "source_file",
  [sym_item] = "item",
  [sym_request] = "request",
  [sym_request_method] = "request_method",
  [sym_endpoint] = "endpoint",
  [sym__declaration] = "_declaration",
  [sym_constant_declaration] = "constant_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_attribute] = "attribute",
  [sym__expression] = "_expression",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym_template_string] = "template_string",
  [sym_template_chars] = "template_chars",
  [sym_template_substitution] = "template_substitution",
  [sym_call] = "call",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_header_statement] = "header_statement",
  [sym_body_statement] = "body_statement",
  [sym_line_comment] = "line_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_template_string_repeat1] = "template_string_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_post] = anon_sym_post,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_patch] = anon_sym_patch,
  [anon_sym_delete] = anon_sym_delete,
  [sym_url_literal] = sym_url_literal,
  [sym_pathname_literal] = sym_pathname_literal,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_null] = anon_sym_null,
  [sym_identifer] = sym_identifer,
  [sym_constant_identifier] = sym_constant_identifier,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_template_chars_token1] = aux_sym_template_chars_token1,
  [aux_sym_template_chars_token2] = aux_sym_template_chars_token2,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_body] = anon_sym_body,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_LF] = anon_sym_LF,
  [sym_source_file] = sym_source_file,
  [sym_item] = sym_item,
  [sym_request] = sym_request,
  [sym_request_method] = sym_request_method,
  [sym_endpoint] = sym_endpoint,
  [sym__declaration] = sym__declaration,
  [sym_constant_declaration] = sym_constant_declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_attribute] = sym_attribute,
  [sym__expression] = sym__expression,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym_template_string] = sym_template_string,
  [sym_template_chars] = sym_template_chars,
  [sym_template_substitution] = sym_template_substitution,
  [sym_call] = sym_call,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_header_statement] = sym_header_statement,
  [sym_body_statement] = sym_body_statement,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_template_string_repeat1] = aux_sym_template_string_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_post] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [sym_url_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_pathname_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [sym_identifer] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_template_chars_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_chars_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_request_method] = {
    .visible = true,
    .named = true,
  },
  [sym_endpoint] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_constant_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_template_string] = {
    .visible = true,
    .named = true,
  },
  [sym_template_chars] = {
    .visible = true,
    .named = true,
  },
  [sym_template_substitution] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_header_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_body_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 38,
  [39] = 8,
  [40] = 38,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 8,
  [45] = 6,
  [46] = 4,
  [47] = 5,
  [48] = 7,
  [49] = 9,
  [50] = 10,
  [51] = 51,
  [52] = 52,
  [53] = 17,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 64,
  [69] = 66,
  [70] = 62,
  [71] = 66,
  [72] = 61,
  [73] = 67,
  [74] = 61,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      ADVANCE_MAP(
        '"', 110,
        '$', 116,
        '(', 119,
        ')', 120,
        '/', 5,
        '=', 65,
        '@', 66,
        '`', 113,
        'b', 29,
        'd', 14,
        'f', 9,
        'g', 15,
        'h', 19,
        'l', 21,
        'n', 43,
        'p', 10,
        's', 22,
        't', 32,
        '{', 121,
        '}', 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(103);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '`') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 't') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '`') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 't') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '`') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(115);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(124);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 45:
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 46:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      ADVANCE_MAP(
        '"', 110,
        '(', 119,
        ')', 120,
        '/', 5,
        '@', 66,
        '`', 113,
        'd', 74,
        'f', 71,
        'g', 75,
        'l', 79,
        'n', 100,
        'p', 72,
        's', 80,
        't', 88,
        '{', 121,
        '}', 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_get);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_post);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_put);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_patch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_url_literal);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_pathname_literal);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == 's') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == ':') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'a') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'c') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'h') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'l') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'l') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'l') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'l') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'p') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 's') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 's') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'u') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'u') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_constant_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_template_chars_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_template_chars_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_template_chars_token2);
      if (lookahead == '{') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(127);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 47},
  [3] = {.lex_state = 47},
  [4] = {.lex_state = 47},
  [5] = {.lex_state = 47},
  [6] = {.lex_state = 47},
  [7] = {.lex_state = 47},
  [8] = {.lex_state = 47},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 47},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 47},
  [13] = {.lex_state = 47},
  [14] = {.lex_state = 47},
  [15] = {.lex_state = 47},
  [16] = {.lex_state = 47},
  [17] = {.lex_state = 47},
  [18] = {.lex_state = 47},
  [19] = {.lex_state = 47},
  [20] = {.lex_state = 47},
  [21] = {.lex_state = 47},
  [22] = {.lex_state = 47},
  [23] = {.lex_state = 47},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 46},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 46},
  [61] = {.lex_state = 111},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 125},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 111},
  [73] = {.lex_state = 125},
  [74] = {.lex_state = 111},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_post] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_patch] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [sym_url_literal] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [sym_constant_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [aux_sym_template_chars_token2] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_body] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym_item] = STATE(3),
    [sym_request] = STATE(21),
    [sym_request_method] = STATE(26),
    [sym__declaration] = STATE(21),
    [sym_constant_declaration] = STATE(21),
    [sym_variable_declaration] = STATE(21),
    [sym_attribute] = STATE(21),
    [sym__expression] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_string] = STATE(15),
    [sym_template_string] = STATE(15),
    [sym_call] = STATE(15),
    [sym_line_comment] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_post] = ACTIONS(5),
    [anon_sym_put] = ACTIONS(5),
    [anon_sym_patch] = ACTIONS(5),
    [anon_sym_delete] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_null] = ACTIONS(13),
    [sym_identifer] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(23),
  },
  [2] = {
    [sym_item] = STATE(2),
    [sym_request] = STATE(21),
    [sym_request_method] = STATE(26),
    [sym__declaration] = STATE(21),
    [sym_constant_declaration] = STATE(21),
    [sym_variable_declaration] = STATE(21),
    [sym_attribute] = STATE(21),
    [sym__expression] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_string] = STATE(15),
    [sym_template_string] = STATE(15),
    [sym_call] = STATE(15),
    [sym_line_comment] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_get] = ACTIONS(27),
    [anon_sym_post] = ACTIONS(27),
    [anon_sym_put] = ACTIONS(27),
    [anon_sym_patch] = ACTIONS(27),
    [anon_sym_delete] = ACTIONS(27),
    [anon_sym_set] = ACTIONS(30),
    [anon_sym_let] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_null] = ACTIONS(39),
    [sym_identifer] = ACTIONS(39),
    [sym_number] = ACTIONS(42),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [anon_sym_BQUOTE] = ACTIONS(51),
    [anon_sym_SLASH_SLASH] = ACTIONS(54),
  },
  [3] = {
    [sym_item] = STATE(2),
    [sym_request] = STATE(21),
    [sym_request_method] = STATE(26),
    [sym__declaration] = STATE(21),
    [sym_constant_declaration] = STATE(21),
    [sym_variable_declaration] = STATE(21),
    [sym_attribute] = STATE(21),
    [sym__expression] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_string] = STATE(15),
    [sym_template_string] = STATE(15),
    [sym_call] = STATE(15),
    [sym_line_comment] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_post] = ACTIONS(5),
    [anon_sym_put] = ACTIONS(5),
    [anon_sym_patch] = ACTIONS(5),
    [anon_sym_delete] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_null] = ACTIONS(13),
    [sym_identifer] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(59), 10,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [26] = 2,
    ACTIONS(63), 10,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [52] = 2,
    ACTIONS(67), 10,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(69), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [78] = 2,
    ACTIONS(71), 10,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(73), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [104] = 2,
    ACTIONS(75), 10,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(77), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [130] = 2,
    ACTIONS(79), 10,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(81), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [156] = 2,
    ACTIONS(83), 10,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(85), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [182] = 4,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_parameter_list,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [211] = 4,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_parameter_list,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(95), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [239] = 4,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_parameter_list,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [267] = 4,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_parameter_list,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(103), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [295] = 4,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_parameter_list,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(107), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [323] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(111), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [351] = 2,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
    ACTIONS(117), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [374] = 2,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [397] = 2,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [419] = 2,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(125), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [441] = 2,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(107), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [463] = 2,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(129), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [485] = 2,
    ACTIONS(131), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(133), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [507] = 9,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_number,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_line_comment,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(135), 2,
      anon_sym_null,
      sym_identifer,
    STATE(54), 5,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
  [541] = 9,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(143), 1,
      sym_number,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      sym_line_comment,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(141), 2,
      anon_sym_null,
      sym_identifer,
    STATE(56), 5,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
  [575] = 8,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      sym_number,
    STATE(16), 1,
      sym_endpoint,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(147), 2,
      sym_url_literal,
      sym_pathname_literal,
    ACTIONS(149), 2,
      anon_sym_null,
      sym_identifer,
    STATE(11), 5,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
  [607] = 6,
    ACTIONS(155), 1,
      sym_number,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(153), 2,
      anon_sym_null,
      sym_identifer,
    ACTIONS(157), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 5,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
  [632] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(165), 1,
      sym_number,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(163), 2,
      anon_sym_null,
      sym_identifer,
    STATE(55), 5,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
  [657] = 6,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      sym_number,
    ACTIONS(157), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(167), 2,
      anon_sym_null,
      sym_identifer,
    STATE(42), 5,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
  [682] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(173), 1,
      sym_number,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(171), 2,
      anon_sym_null,
      sym_identifer,
    STATE(14), 5,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
  [707] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(177), 1,
      sym_number,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(175), 2,
      anon_sym_null,
      sym_identifer,
    STATE(13), 5,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
  [732] = 5,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 1,
      anon_sym_header,
    ACTIONS(183), 1,
      anon_sym_body,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH,
    STATE(34), 5,
      sym__statement,
      sym_header_statement,
      sym_body_statement,
      sym_line_comment,
      aux_sym_block_repeat1,
  [752] = 2,
    ACTIONS(189), 4,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(187), 5,
      sym_url_literal,
      sym_pathname_literal,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [766] = 5,
    ACTIONS(181), 1,
      anon_sym_header,
    ACTIONS(183), 1,
      anon_sym_body,
    ACTIONS(185), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(35), 5,
      sym__statement,
      sym_header_statement,
      sym_body_statement,
      sym_line_comment,
      aux_sym_block_repeat1,
  [786] = 5,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    ACTIONS(195), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_body,
    ACTIONS(201), 1,
      anon_sym_SLASH_SLASH,
    STATE(35), 5,
      sym__statement,
      sym_header_statement,
      sym_body_statement,
      sym_line_comment,
      aux_sym_block_repeat1,
  [806] = 5,
    ACTIONS(204), 1,
      anon_sym_BQUOTE,
    ACTIONS(206), 1,
      aux_sym_template_chars_token1,
    ACTIONS(208), 1,
      aux_sym_template_chars_token2,
    ACTIONS(210), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(41), 3,
      sym_template_chars,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [824] = 5,
    ACTIONS(206), 1,
      aux_sym_template_chars_token1,
    ACTIONS(208), 1,
      aux_sym_template_chars_token2,
    ACTIONS(210), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(212), 1,
      anon_sym_BQUOTE,
    STATE(41), 3,
      sym_template_chars,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [842] = 5,
    ACTIONS(206), 1,
      aux_sym_template_chars_token1,
    ACTIONS(208), 1,
      aux_sym_template_chars_token2,
    ACTIONS(210), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(214), 1,
      anon_sym_BQUOTE,
    STATE(37), 3,
      sym_template_chars,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [860] = 2,
    ACTIONS(75), 3,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    ACTIONS(77), 4,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [872] = 5,
    ACTIONS(206), 1,
      aux_sym_template_chars_token1,
    ACTIONS(208), 1,
      aux_sym_template_chars_token2,
    ACTIONS(210), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(216), 1,
      anon_sym_BQUOTE,
    STATE(36), 3,
      sym_template_chars,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [890] = 5,
    ACTIONS(218), 1,
      anon_sym_BQUOTE,
    ACTIONS(220), 1,
      aux_sym_template_chars_token1,
    ACTIONS(223), 1,
      aux_sym_template_chars_token2,
    ACTIONS(226), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(41), 3,
      sym_template_chars,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [908] = 3,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_parameter_list,
    ACTIONS(229), 4,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [921] = 3,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_parameter_list,
    ACTIONS(233), 4,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [934] = 1,
    ACTIONS(75), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [942] = 1,
    ACTIONS(67), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [950] = 1,
    ACTIONS(59), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [958] = 1,
    ACTIONS(63), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [966] = 1,
    ACTIONS(71), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [974] = 1,
    ACTIONS(79), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [982] = 1,
    ACTIONS(83), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [990] = 2,
    ACTIONS(237), 1,
      aux_sym_template_chars_token1,
    ACTIONS(235), 3,
      anon_sym_BQUOTE,
      aux_sym_template_chars_token2,
      anon_sym_DOLLAR_LBRACE,
  [999] = 2,
    ACTIONS(241), 1,
      aux_sym_template_chars_token1,
    ACTIONS(239), 3,
      anon_sym_BQUOTE,
      aux_sym_template_chars_token2,
      anon_sym_DOLLAR_LBRACE,
  [1008] = 1,
    ACTIONS(115), 4,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [1015] = 3,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_parameter_list,
  [1025] = 3,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_parameter_list,
  [1035] = 3,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_parameter_list,
  [1045] = 2,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_string,
  [1052] = 1,
    ACTIONS(251), 1,
      sym_identifer,
  [1056] = 1,
    ACTIONS(253), 1,
      sym_constant_identifier,
  [1060] = 1,
    ACTIONS(255), 1,
      sym_identifer,
  [1064] = 1,
    ACTIONS(257), 1,
      aux_sym_string_token1,
  [1068] = 1,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
  [1072] = 1,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
  [1076] = 1,
    ACTIONS(261), 1,
      anon_sym_LF,
  [1080] = 1,
    ACTIONS(263), 1,
      anon_sym_EQ,
  [1084] = 1,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
  [1088] = 1,
    ACTIONS(267), 1,
      aux_sym_line_comment_token1,
  [1092] = 1,
    ACTIONS(269), 1,
      anon_sym_LF,
  [1096] = 1,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
  [1100] = 1,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
  [1104] = 1,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
  [1108] = 1,
    ACTIONS(275), 1,
      aux_sym_string_token1,
  [1112] = 1,
    ACTIONS(277), 1,
      aux_sym_line_comment_token1,
  [1116] = 1,
    ACTIONS(279), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 26,
  [SMALL_STATE(6)] = 52,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 104,
  [SMALL_STATE(9)] = 130,
  [SMALL_STATE(10)] = 156,
  [SMALL_STATE(11)] = 182,
  [SMALL_STATE(12)] = 211,
  [SMALL_STATE(13)] = 239,
  [SMALL_STATE(14)] = 267,
  [SMALL_STATE(15)] = 295,
  [SMALL_STATE(16)] = 323,
  [SMALL_STATE(17)] = 351,
  [SMALL_STATE(18)] = 374,
  [SMALL_STATE(19)] = 397,
  [SMALL_STATE(20)] = 419,
  [SMALL_STATE(21)] = 441,
  [SMALL_STATE(22)] = 463,
  [SMALL_STATE(23)] = 485,
  [SMALL_STATE(24)] = 507,
  [SMALL_STATE(25)] = 541,
  [SMALL_STATE(26)] = 575,
  [SMALL_STATE(27)] = 607,
  [SMALL_STATE(28)] = 632,
  [SMALL_STATE(29)] = 657,
  [SMALL_STATE(30)] = 682,
  [SMALL_STATE(31)] = 707,
  [SMALL_STATE(32)] = 732,
  [SMALL_STATE(33)] = 752,
  [SMALL_STATE(34)] = 766,
  [SMALL_STATE(35)] = 786,
  [SMALL_STATE(36)] = 806,
  [SMALL_STATE(37)] = 824,
  [SMALL_STATE(38)] = 842,
  [SMALL_STATE(39)] = 860,
  [SMALL_STATE(40)] = 872,
  [SMALL_STATE(41)] = 890,
  [SMALL_STATE(42)] = 908,
  [SMALL_STATE(43)] = 921,
  [SMALL_STATE(44)] = 934,
  [SMALL_STATE(45)] = 942,
  [SMALL_STATE(46)] = 950,
  [SMALL_STATE(47)] = 958,
  [SMALL_STATE(48)] = 966,
  [SMALL_STATE(49)] = 974,
  [SMALL_STATE(50)] = 982,
  [SMALL_STATE(51)] = 990,
  [SMALL_STATE(52)] = 999,
  [SMALL_STATE(53)] = 1008,
  [SMALL_STATE(54)] = 1015,
  [SMALL_STATE(55)] = 1025,
  [SMALL_STATE(56)] = 1035,
  [SMALL_STATE(57)] = 1045,
  [SMALL_STATE(58)] = 1052,
  [SMALL_STATE(59)] = 1056,
  [SMALL_STATE(60)] = 1060,
  [SMALL_STATE(61)] = 1064,
  [SMALL_STATE(62)] = 1068,
  [SMALL_STATE(63)] = 1072,
  [SMALL_STATE(64)] = 1076,
  [SMALL_STATE(65)] = 1080,
  [SMALL_STATE(66)] = 1084,
  [SMALL_STATE(67)] = 1088,
  [SMALL_STATE(68)] = 1092,
  [SMALL_STATE(69)] = 1096,
  [SMALL_STATE(70)] = 1100,
  [SMALL_STATE(71)] = 1104,
  [SMALL_STATE(72)] = 1108,
  [SMALL_STATE(73)] = 1112,
  [SMALL_STATE(74)] = 1116,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endpoint, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_declaration, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_declaration, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_method, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_method, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_string_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_statement, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_statement, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_chars, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_chars, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_substitution, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_substitution, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [259] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_restedlang(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
