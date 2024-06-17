#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 100
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

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
  sym_identifier = 13,
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
  anon_sym_LBRACK = 25,
  anon_sym_COMMA = 26,
  anon_sym_RBRACK = 27,
  anon_sym_LBRACE = 28,
  anon_sym_COLON = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  anon_sym_header = 32,
  anon_sym_body = 33,
  sym_line_comment = 34,
  sym_source_file = 35,
  sym_item = 36,
  sym_request = 37,
  sym_request_method = 38,
  sym_endpoint = 39,
  sym__declaration = 40,
  sym_constant_declaration = 41,
  sym_variable_declaration = 42,
  sym_attribute = 43,
  sym__expression = 44,
  sym_boolean = 45,
  sym_string = 46,
  sym_template_string = 47,
  sym_template_chars = 48,
  sym_template_substitution = 49,
  sym_call = 50,
  sym_array = 51,
  sym_object = 52,
  sym_pair = 53,
  sym_parameter_list = 54,
  sym_block = 55,
  sym__statement = 56,
  sym_header_statement = 57,
  sym_body_statement = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_template_string_repeat1 = 60,
  aux_sym_array_repeat1 = 61,
  aux_sym_object_repeat1 = 62,
  aux_sym_block_repeat1 = 63,
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
  [sym_identifier] = "identifier",
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_header] = "header",
  [anon_sym_body] = "body",
  [sym_line_comment] = "line_comment",
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
  [sym_array] = "array",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_header_statement] = "header_statement",
  [sym_body_statement] = "body_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_template_string_repeat1] = "template_string_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
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
  [sym_identifier] = sym_identifier,
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_body] = anon_sym_body,
  [sym_line_comment] = sym_line_comment,
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
  [sym_array] = sym_array,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_header_statement] = sym_header_statement,
  [sym_body_statement] = sym_body_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_template_string_repeat1] = aux_sym_template_string_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
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
  [sym_identifier] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
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
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
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
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 30,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 4,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 45,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 51,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 16,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 4,
  [62] = 62,
  [63] = 15,
  [64] = 9,
  [65] = 7,
  [66] = 6,
  [67] = 8,
  [68] = 13,
  [69] = 69,
  [70] = 11,
  [71] = 14,
  [72] = 10,
  [73] = 5,
  [74] = 12,
  [75] = 75,
  [76] = 75,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 77,
  [81] = 81,
  [82] = 82,
  [83] = 79,
  [84] = 84,
  [85] = 78,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 94,
  [97] = 94,
  [98] = 89,
  [99] = 89,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      ADVANCE_MAP(
        '"', 113,
        '$', 123,
        '(', 131,
        ')', 132,
        ',', 127,
        '/', 61,
        ':', 130,
        '=', 68,
        '@', 69,
        '[', 126,
        ']', 128,
        '`', 118,
        'b', 31,
        'd', 15,
        'f', 10,
        'g', 16,
        'h', 21,
        'l', 23,
        'n', 45,
        'p', 11,
        's', 24,
        't', 34,
        '{', 129,
        '}', 125,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(106);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 113,
        ')', 132,
        '/', 6,
        '[', 126,
        ']', 128,
        '`', 118,
        'f', 74,
        'n', 103,
        't', 91,
        '{', 129,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 113,
        '/', 61,
        '[', 126,
        '`', 118,
        'f', 74,
        'h', 102,
        'n', 103,
        't', 91,
        '{', 129,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '}') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '`') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(122);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'h') ADVANCE(20);
      if (lookahead == '}') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(106);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(135);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 47:
      if (lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      ADVANCE_MAP(
        '"', 113,
        '(', 131,
        ')', 132,
        ',', 127,
        '/', 6,
        ':', 130,
        '=', 68,
        '@', 69,
        '[', 126,
        ']', 128,
        '`', 118,
        'd', 77,
        'f', 74,
        'g', 78,
        'l', 82,
        'n', 103,
        'p', 75,
        's', 83,
        't', 91,
        '{', 129,
        '}', 125,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_get);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_post);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_put);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_patch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_url_literal);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_pathname_literal);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_pathname_literal);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(63);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_pathname_literal);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 's') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_constant_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_template_chars_token1);
      if (lookahead == '/') ADVANCE(120);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_template_chars_token1);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_template_chars_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '`' ||
          lookahead == '{') ADVANCE(135);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_template_chars_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_template_chars_token2);
      if (lookahead == '{') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(135);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 48},
  [3] = {.lex_state = 48},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 48},
  [8] = {.lex_state = 48},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 48},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 48},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 48},
  [15] = {.lex_state = 48},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 48},
  [19] = {.lex_state = 48},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 48},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 48},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 48},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 48},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 48},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 48},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 48},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 48},
  [76] = {.lex_state = 48},
  [77] = {.lex_state = 48},
  [78] = {.lex_state = 48},
  [79] = {.lex_state = 48},
  [80] = {.lex_state = 48},
  [81] = {.lex_state = 48},
  [82] = {.lex_state = 48},
  [83] = {.lex_state = 48},
  [84] = {.lex_state = 48},
  [85] = {.lex_state = 48},
  [86] = {.lex_state = 48},
  [87] = {.lex_state = 48},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 115},
  [90] = {.lex_state = 48},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 48},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 48},
  [95] = {.lex_state = 48},
  [96] = {.lex_state = 48},
  [97] = {.lex_state = 48},
  [98] = {.lex_state = 115},
  [99] = {.lex_state = 115},
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
    [sym_pathname_literal] = ACTIONS(1),
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_body] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(92),
    [sym_item] = STATE(3),
    [sym_request] = STATE(24),
    [sym_request_method] = STATE(23),
    [sym__declaration] = STATE(24),
    [sym_constant_declaration] = STATE(24),
    [sym_variable_declaration] = STATE(24),
    [sym_attribute] = STATE(24),
    [sym__expression] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_template_string] = STATE(21),
    [sym_call] = STATE(21),
    [sym_array] = STATE(21),
    [sym_object] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(7),
    [anon_sym_post] = ACTIONS(7),
    [anon_sym_put] = ACTIONS(7),
    [anon_sym_patch] = ACTIONS(7),
    [anon_sym_delete] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_null] = ACTIONS(15),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(29),
  },
  [2] = {
    [sym_item] = STATE(2),
    [sym_request] = STATE(24),
    [sym_request_method] = STATE(23),
    [sym__declaration] = STATE(24),
    [sym_constant_declaration] = STATE(24),
    [sym_variable_declaration] = STATE(24),
    [sym_attribute] = STATE(24),
    [sym__expression] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_template_string] = STATE(21),
    [sym_call] = STATE(21),
    [sym_array] = STATE(21),
    [sym_object] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_get] = ACTIONS(33),
    [anon_sym_post] = ACTIONS(33),
    [anon_sym_put] = ACTIONS(33),
    [anon_sym_patch] = ACTIONS(33),
    [anon_sym_delete] = ACTIONS(33),
    [anon_sym_set] = ACTIONS(36),
    [anon_sym_let] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(42),
    [anon_sym_null] = ACTIONS(45),
    [sym_identifier] = ACTIONS(45),
    [sym_number] = ACTIONS(48),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(54),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(60),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_line_comment] = ACTIONS(29),
  },
  [3] = {
    [sym_item] = STATE(2),
    [sym_request] = STATE(24),
    [sym_request_method] = STATE(23),
    [sym__declaration] = STATE(24),
    [sym_constant_declaration] = STATE(24),
    [sym_variable_declaration] = STATE(24),
    [sym_attribute] = STATE(24),
    [sym__expression] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_string] = STATE(21),
    [sym_template_string] = STATE(21),
    [sym_call] = STATE(21),
    [sym_array] = STATE(21),
    [sym_object] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_get] = ACTIONS(7),
    [anon_sym_post] = ACTIONS(7),
    [anon_sym_put] = ACTIONS(7),
    [anon_sym_patch] = ACTIONS(7),
    [anon_sym_delete] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_null] = ACTIONS(15),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(70), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(68), 13,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [32] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(74), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(72), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [63] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(78), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(76), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [94] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(82), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(80), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [125] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(86), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(84), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [156] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(90), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(88), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [187] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(94), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(92), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [218] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(98), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(96), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [249] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(102), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(100), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [280] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(106), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(104), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [311] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(110), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [342] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(114), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(112), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [373] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(118), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 12,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [404] = 5,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_parameter_list,
    ACTIONS(120), 7,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(122), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [436] = 5,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_parameter_list,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(128), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [468] = 5,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_parameter_list,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(132), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [500] = 5,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_parameter_list,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(136), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [532] = 5,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_parameter_list,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(140), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [564] = 5,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(144), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [595] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      sym_url_literal,
    ACTIONS(150), 1,
      sym_pathname_literal,
    ACTIONS(154), 1,
      sym_number,
    STATE(22), 1,
      sym_endpoint,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(152), 2,
      anon_sym_null,
      sym_identifier,
    STATE(19), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [640] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(140), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [666] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(156), 7,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(158), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [692] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(160), 7,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(162), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [718] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(132), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [744] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(164), 7,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(166), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [770] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(168), 7,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(170), 11,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_patch,
      anon_sym_delete,
      anon_sym_set,
      anon_sym_let,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [796] = 10,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(174), 1,
      sym_number,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(172), 2,
      anon_sym_null,
      sym_identifier,
    STATE(75), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [835] = 10,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(180), 1,
      sym_number,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(178), 2,
      anon_sym_null,
      sym_identifier,
    STATE(53), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [874] = 10,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(184), 2,
      anon_sym_null,
      sym_identifier,
    STATE(51), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [913] = 10,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      sym_number,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      anon_sym_null,
      sym_identifier,
    STATE(76), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [952] = 9,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_BQUOTE,
    ACTIONS(206), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(196), 2,
      anon_sym_null,
      sym_identifier,
    ACTIONS(200), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [988] = 9,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(212), 1,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(210), 2,
      anon_sym_null,
      sym_identifier,
    STATE(20), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [1024] = 9,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(216), 1,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_null,
      sym_identifier,
    STATE(17), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [1060] = 9,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(220), 1,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(218), 2,
      anon_sym_null,
      sym_identifier,
    STATE(58), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [1096] = 9,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(222), 2,
      anon_sym_null,
      sym_identifier,
    STATE(60), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [1132] = 9,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(228), 1,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(226), 2,
      anon_sym_null,
      sym_identifier,
    STATE(81), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [1168] = 9,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_BQUOTE,
    ACTIONS(206), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      sym_number,
    ACTIONS(200), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_null,
      sym_identifier,
    STATE(56), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [1204] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(236), 5,
      sym_pathname_literal,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(234), 6,
      sym_url_literal,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [1223] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(70), 4,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(68), 5,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [1240] = 5,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(240), 1,
      anon_sym_header,
    ACTIONS(243), 1,
      anon_sym_body,
    STATE(43), 4,
      sym__statement,
      sym_header_statement,
      sym_body_statement,
      aux_sym_block_repeat1,
  [1259] = 5,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 1,
      anon_sym_header,
    ACTIONS(250), 1,
      anon_sym_body,
    STATE(43), 4,
      sym__statement,
      sym_header_statement,
      sym_body_statement,
      aux_sym_block_repeat1,
  [1278] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 1,
      anon_sym_BQUOTE,
    ACTIONS(256), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(254), 2,
      aux_sym_template_chars_token1,
      aux_sym_template_chars_token2,
    STATE(46), 3,
      sym_template_chars,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [1297] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(258), 1,
      anon_sym_BQUOTE,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(260), 2,
      aux_sym_template_chars_token1,
      aux_sym_template_chars_token2,
    STATE(46), 3,
      sym_template_chars,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [1316] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(256), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 2,
      aux_sym_template_chars_token1,
      aux_sym_template_chars_token2,
    STATE(45), 3,
      sym_template_chars,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [1335] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(256), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(268), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 2,
      aux_sym_template_chars_token1,
      aux_sym_template_chars_token2,
    STATE(49), 3,
      sym_template_chars,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [1354] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(256), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(270), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 2,
      aux_sym_template_chars_token1,
      aux_sym_template_chars_token2,
    STATE(46), 3,
      sym_template_chars,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [1373] = 5,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      anon_sym_header,
    ACTIONS(250), 1,
      anon_sym_body,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(44), 4,
      sym__statement,
      sym_header_statement,
      sym_body_statement,
      aux_sym_block_repeat1,
  [1392] = 6,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym_parameter_list,
    STATE(83), 1,
      aux_sym_array_repeat1,
  [1411] = 4,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_parameter_list,
    ACTIONS(278), 3,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_body,
  [1426] = 6,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym_parameter_list,
    STATE(79), 1,
      aux_sym_array_repeat1,
  [1445] = 6,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(284), 1,
      sym_identifier,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_pair,
    STATE(95), 1,
      sym_string,
  [1464] = 6,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(284), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym_pair,
    STATE(95), 1,
      sym_string,
  [1483] = 4,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_parameter_list,
    ACTIONS(290), 3,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_body,
  [1498] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(116), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
  [1508] = 4,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_parameter_list,
    ACTIONS(292), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1522] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 4,
      anon_sym_BQUOTE,
      aux_sym_template_chars_token1,
      aux_sym_template_chars_token2,
      anon_sym_DOLLAR_LBRACE,
  [1532] = 4,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_parameter_list,
    ACTIONS(296), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1546] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(68), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
  [1556] = 5,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(284), 1,
      sym_identifier,
    STATE(87), 1,
      sym_pair,
    STATE(95), 1,
      sym_string,
  [1572] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(112), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
  [1582] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(88), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
  [1592] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(80), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
  [1602] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(76), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
  [1612] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(84), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
  [1622] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(104), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
  [1632] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(298), 4,
      anon_sym_BQUOTE,
      aux_sym_template_chars_token1,
      aux_sym_template_chars_token2,
      anon_sym_DOLLAR_LBRACE,
  [1642] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(96), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
  [1652] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(108), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
  [1662] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(92), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
  [1672] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(72), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
  [1682] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(100), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
  [1692] = 4,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_parameter_list,
  [1705] = 4,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_parameter_list,
  [1718] = 4,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_object_repeat1,
  [1731] = 4,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym_object_repeat1,
  [1744] = 4,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_array_repeat1,
  [1757] = 4,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_object_repeat1,
  [1770] = 4,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym_parameter_list,
  [1783] = 4,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_array_repeat1,
  [1796] = 4,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_array_repeat1,
  [1809] = 4,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_object_repeat1,
  [1822] = 4,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym_object_repeat1,
  [1835] = 3,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_string,
  [1845] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(321), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1853] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(330), 1,
      sym_constant_identifier,
  [1860] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(332), 1,
      aux_sym_string_token1,
  [1867] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(334), 1,
      anon_sym_EQ,
  [1874] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(336), 1,
      sym_identifier,
  [1881] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
  [1888] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(340), 1,
      sym_identifier,
  [1895] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
  [1902] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COLON,
  [1909] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(346), 1,
      anon_sym_DQUOTE,
  [1916] = 2,
    ACTIONS(29), 1,
      sym_line_comment,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
  [1923] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(350), 1,
      aux_sym_string_token1,
  [1930] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 32,
  [SMALL_STATE(6)] = 63,
  [SMALL_STATE(7)] = 94,
  [SMALL_STATE(8)] = 125,
  [SMALL_STATE(9)] = 156,
  [SMALL_STATE(10)] = 187,
  [SMALL_STATE(11)] = 218,
  [SMALL_STATE(12)] = 249,
  [SMALL_STATE(13)] = 280,
  [SMALL_STATE(14)] = 311,
  [SMALL_STATE(15)] = 342,
  [SMALL_STATE(16)] = 373,
  [SMALL_STATE(17)] = 404,
  [SMALL_STATE(18)] = 436,
  [SMALL_STATE(19)] = 468,
  [SMALL_STATE(20)] = 500,
  [SMALL_STATE(21)] = 532,
  [SMALL_STATE(22)] = 564,
  [SMALL_STATE(23)] = 595,
  [SMALL_STATE(24)] = 640,
  [SMALL_STATE(25)] = 666,
  [SMALL_STATE(26)] = 692,
  [SMALL_STATE(27)] = 718,
  [SMALL_STATE(28)] = 744,
  [SMALL_STATE(29)] = 770,
  [SMALL_STATE(30)] = 796,
  [SMALL_STATE(31)] = 835,
  [SMALL_STATE(32)] = 874,
  [SMALL_STATE(33)] = 913,
  [SMALL_STATE(34)] = 952,
  [SMALL_STATE(35)] = 988,
  [SMALL_STATE(36)] = 1024,
  [SMALL_STATE(37)] = 1060,
  [SMALL_STATE(38)] = 1096,
  [SMALL_STATE(39)] = 1132,
  [SMALL_STATE(40)] = 1168,
  [SMALL_STATE(41)] = 1204,
  [SMALL_STATE(42)] = 1223,
  [SMALL_STATE(43)] = 1240,
  [SMALL_STATE(44)] = 1259,
  [SMALL_STATE(45)] = 1278,
  [SMALL_STATE(46)] = 1297,
  [SMALL_STATE(47)] = 1316,
  [SMALL_STATE(48)] = 1335,
  [SMALL_STATE(49)] = 1354,
  [SMALL_STATE(50)] = 1373,
  [SMALL_STATE(51)] = 1392,
  [SMALL_STATE(52)] = 1411,
  [SMALL_STATE(53)] = 1426,
  [SMALL_STATE(54)] = 1445,
  [SMALL_STATE(55)] = 1464,
  [SMALL_STATE(56)] = 1483,
  [SMALL_STATE(57)] = 1498,
  [SMALL_STATE(58)] = 1508,
  [SMALL_STATE(59)] = 1522,
  [SMALL_STATE(60)] = 1532,
  [SMALL_STATE(61)] = 1546,
  [SMALL_STATE(62)] = 1556,
  [SMALL_STATE(63)] = 1572,
  [SMALL_STATE(64)] = 1582,
  [SMALL_STATE(65)] = 1592,
  [SMALL_STATE(66)] = 1602,
  [SMALL_STATE(67)] = 1612,
  [SMALL_STATE(68)] = 1622,
  [SMALL_STATE(69)] = 1632,
  [SMALL_STATE(70)] = 1642,
  [SMALL_STATE(71)] = 1652,
  [SMALL_STATE(72)] = 1662,
  [SMALL_STATE(73)] = 1672,
  [SMALL_STATE(74)] = 1682,
  [SMALL_STATE(75)] = 1692,
  [SMALL_STATE(76)] = 1705,
  [SMALL_STATE(77)] = 1718,
  [SMALL_STATE(78)] = 1731,
  [SMALL_STATE(79)] = 1744,
  [SMALL_STATE(80)] = 1757,
  [SMALL_STATE(81)] = 1770,
  [SMALL_STATE(82)] = 1783,
  [SMALL_STATE(83)] = 1796,
  [SMALL_STATE(84)] = 1809,
  [SMALL_STATE(85)] = 1822,
  [SMALL_STATE(86)] = 1835,
  [SMALL_STATE(87)] = 1845,
  [SMALL_STATE(88)] = 1853,
  [SMALL_STATE(89)] = 1860,
  [SMALL_STATE(90)] = 1867,
  [SMALL_STATE(91)] = 1874,
  [SMALL_STATE(92)] = 1881,
  [SMALL_STATE(93)] = 1888,
  [SMALL_STATE(94)] = 1895,
  [SMALL_STATE(95)] = 1902,
  [SMALL_STATE(96)] = 1909,
  [SMALL_STATE(97)] = 1916,
  [SMALL_STATE(98)] = 1923,
  [SMALL_STATE(99)] = 1930,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endpoint, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_declaration, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_declaration, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_method, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_method, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2, 0, 0),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_statement, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_statement, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_substitution, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_chars, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [338] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
