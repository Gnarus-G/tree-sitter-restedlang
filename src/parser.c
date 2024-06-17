#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 108
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  anon_sym_SLASH_SLASH = 34,
  aux_sym_line_comment_token1 = 35,
  anon_sym_LF = 36,
  sym_source_file = 37,
  sym_item = 38,
  sym_request = 39,
  sym_request_method = 40,
  sym_endpoint = 41,
  sym__declaration = 42,
  sym_constant_declaration = 43,
  sym_variable_declaration = 44,
  sym_attribute = 45,
  sym__expression = 46,
  sym_boolean = 47,
  sym_string = 48,
  sym_template_string = 49,
  sym_template_chars = 50,
  sym_template_substitution = 51,
  sym_call = 52,
  sym_array = 53,
  sym_object = 54,
  sym_pair = 55,
  sym_parameter_list = 56,
  sym_block = 57,
  sym__statement = 58,
  sym_header_statement = 59,
  sym_body_statement = 60,
  sym_line_comment = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_template_string_repeat1 = 63,
  aux_sym_array_repeat1 = 64,
  aux_sym_object_repeat1 = 65,
  aux_sym_block_repeat1 = 66,
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
  [sym_array] = "array",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_header_statement] = "header_statement",
  [sym_body_statement] = "body_statement",
  [sym_line_comment] = "line_comment",
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
  [sym_array] = sym_array,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_header_statement] = sym_header_statement,
  [sym_body_statement] = sym_body_statement,
  [sym_line_comment] = sym_line_comment,
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
  [32] = 28,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 4,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 49,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 13,
  [56] = 7,
  [57] = 10,
  [58] = 12,
  [59] = 6,
  [60] = 8,
  [61] = 9,
  [62] = 11,
  [63] = 15,
  [64] = 16,
  [65] = 14,
  [66] = 5,
  [67] = 4,
  [68] = 68,
  [69] = 68,
  [70] = 54,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 22,
  [76] = 76,
  [77] = 77,
  [78] = 77,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 81,
  [84] = 84,
  [85] = 85,
  [86] = 85,
  [87] = 80,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 95,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 99,
  [102] = 102,
  [103] = 91,
  [104] = 95,
  [105] = 93,
  [106] = 90,
  [107] = 93,
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
        '(', 124,
        ')', 125,
        ',', 120,
        '/', 6,
        ':', 123,
        '=', 65,
        '@', 66,
        '[', 119,
        ']', 121,
        '`', 113,
        'b', 30,
        'd', 15,
        'f', 10,
        'g', 16,
        'h', 20,
        'l', 22,
        'n', 44,
        'p', 11,
        's', 23,
        't', 33,
        '{', 122,
        '}', 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(103);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 110,
        ')', 125,
        '/', 6,
        '[', 119,
        ']', 121,
        '`', 113,
        'f', 71,
        'n', 100,
        't', 88,
        '{', 122,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 110,
        '/', 60,
        '[', 119,
        '`', 113,
        'f', 71,
        'h', 99,
        'n', 100,
        't', 88,
        '{', 122,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '}') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '`') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(115);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(128);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 46:
      if (lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      ADVANCE_MAP(
        '"', 110,
        '(', 124,
        ')', 125,
        ',', 120,
        '/', 6,
        ':', 123,
        '@', 66,
        '[', 119,
        ']', 121,
        '`', 113,
        'd', 74,
        'f', 71,
        'g', 75,
        'l', 79,
        'n', 100,
        'p', 72,
        's', 80,
        't', 88,
        '{', 122,
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
          lookahead != '{') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_pathname_literal);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(60);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == 's') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
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
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(131);
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
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 47},
  [26] = {.lex_state = 47},
  [27] = {.lex_state = 47},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 47},
  [30] = {.lex_state = 47},
  [31] = {.lex_state = 47},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 129},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 111},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 111},
  [106] = {.lex_state = 129},
  [107] = {.lex_state = 111},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_body] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(92),
    [sym_item] = STATE(2),
    [sym_request] = STATE(25),
    [sym_request_method] = STATE(24),
    [sym__declaration] = STATE(25),
    [sym_constant_declaration] = STATE(25),
    [sym_variable_declaration] = STATE(25),
    [sym_attribute] = STATE(25),
    [sym__expression] = STATE(18),
    [sym_boolean] = STATE(18),
    [sym_string] = STATE(18),
    [sym_template_string] = STATE(18),
    [sym_call] = STATE(18),
    [sym_array] = STATE(18),
    [sym_object] = STATE(18),
    [sym_line_comment] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    [sym_identifier] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
  },
  [2] = {
    [sym_item] = STATE(3),
    [sym_request] = STATE(25),
    [sym_request_method] = STATE(24),
    [sym__declaration] = STATE(25),
    [sym_constant_declaration] = STATE(25),
    [sym_variable_declaration] = STATE(25),
    [sym_attribute] = STATE(25),
    [sym__expression] = STATE(18),
    [sym_boolean] = STATE(18),
    [sym_string] = STATE(18),
    [sym_template_string] = STATE(18),
    [sym_call] = STATE(18),
    [sym_array] = STATE(18),
    [sym_object] = STATE(18),
    [sym_line_comment] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_post] = ACTIONS(5),
    [anon_sym_put] = ACTIONS(5),
    [anon_sym_patch] = ACTIONS(5),
    [anon_sym_delete] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_null] = ACTIONS(13),
    [sym_identifier] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
  },
  [3] = {
    [sym_item] = STATE(3),
    [sym_request] = STATE(25),
    [sym_request_method] = STATE(24),
    [sym__declaration] = STATE(25),
    [sym_constant_declaration] = STATE(25),
    [sym_variable_declaration] = STATE(25),
    [sym_attribute] = STATE(25),
    [sym__expression] = STATE(18),
    [sym_boolean] = STATE(18),
    [sym_string] = STATE(18),
    [sym_template_string] = STATE(18),
    [sym_call] = STATE(18),
    [sym_array] = STATE(18),
    [sym_object] = STATE(18),
    [sym_line_comment] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(66),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(71), 11,
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
    ACTIONS(69), 14,
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
      anon_sym_SLASH_SLASH,
  [30] = 2,
    ACTIONS(75), 11,
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
    ACTIONS(73), 13,
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
      anon_sym_SLASH_SLASH,
  [59] = 2,
    ACTIONS(79), 11,
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
    ACTIONS(77), 13,
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
      anon_sym_SLASH_SLASH,
  [88] = 2,
    ACTIONS(83), 11,
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
    ACTIONS(81), 13,
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
      anon_sym_SLASH_SLASH,
  [117] = 2,
    ACTIONS(87), 11,
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
    ACTIONS(85), 13,
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
      anon_sym_SLASH_SLASH,
  [146] = 2,
    ACTIONS(91), 11,
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
    ACTIONS(89), 13,
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
      anon_sym_SLASH_SLASH,
  [175] = 2,
    ACTIONS(95), 11,
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
    ACTIONS(93), 13,
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
      anon_sym_SLASH_SLASH,
  [204] = 2,
    ACTIONS(99), 11,
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
    ACTIONS(97), 13,
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
      anon_sym_SLASH_SLASH,
  [233] = 2,
    ACTIONS(103), 11,
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
    ACTIONS(101), 13,
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
      anon_sym_SLASH_SLASH,
  [262] = 2,
    ACTIONS(107), 11,
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
    ACTIONS(105), 13,
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
      anon_sym_SLASH_SLASH,
  [291] = 2,
    ACTIONS(111), 11,
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
    ACTIONS(109), 13,
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
      anon_sym_SLASH_SLASH,
  [320] = 2,
    ACTIONS(115), 11,
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
    ACTIONS(113), 13,
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
      anon_sym_SLASH_SLASH,
  [349] = 2,
    ACTIONS(119), 11,
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
    ACTIONS(117), 13,
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
      anon_sym_SLASH_SLASH,
  [378] = 4,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_parameter_list,
    ACTIONS(121), 8,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(123), 11,
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
  [408] = 4,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_parameter_list,
    ACTIONS(127), 8,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [438] = 4,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_parameter_list,
    ACTIONS(131), 8,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [468] = 4,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_parameter_list,
    ACTIONS(135), 8,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 11,
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
  [498] = 4,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_parameter_list,
    ACTIONS(139), 8,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 11,
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
  [528] = 2,
    ACTIONS(143), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
    ACTIONS(145), 11,
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
  [553] = 4,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
    ACTIONS(147), 7,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 11,
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
  [582] = 10,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      sym_number,
    STATE(23), 1,
      sym_endpoint,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      sym_url_literal,
      sym_pathname_literal,
    ACTIONS(155), 2,
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
  [622] = 2,
    ACTIONS(127), 8,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [646] = 2,
    ACTIONS(159), 8,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(161), 11,
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
  [670] = 2,
    ACTIONS(163), 8,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(165), 11,
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
  [694] = 11,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(169), 1,
      sym_number,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      sym_line_comment,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(167), 2,
      anon_sym_null,
      sym_identifier,
    STATE(87), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [736] = 2,
    ACTIONS(135), 8,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 11,
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
  [760] = 2,
    ACTIONS(173), 8,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 11,
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
  [784] = 2,
    ACTIONS(177), 8,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(179), 11,
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
  [808] = 11,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(183), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_line_comment,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(181), 2,
      anon_sym_null,
      sym_identifier,
    STATE(80), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [850] = 9,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      sym_number,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(187), 2,
      anon_sym_null,
      sym_identifier,
    STATE(70), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [886] = 9,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      sym_number,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(193), 2,
      anon_sym_null,
      sym_identifier,
    STATE(54), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [922] = 8,
    ACTIONS(201), 1,
      sym_number,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_BQUOTE,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 2,
      anon_sym_null,
      sym_identifier,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [955] = 8,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      sym_number,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(213), 2,
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
  [988] = 8,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym_number,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(217), 2,
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
  [1021] = 8,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(223), 1,
      sym_number,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      anon_sym_null,
      sym_identifier,
    STATE(74), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [1054] = 8,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(227), 1,
      sym_number,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(225), 2,
      anon_sym_null,
      sym_identifier,
    STATE(79), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [1087] = 8,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      sym_number,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(229), 2,
      anon_sym_null,
      sym_identifier,
    STATE(73), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [1120] = 8,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_BQUOTE,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      sym_number,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(233), 2,
      anon_sym_null,
      sym_identifier,
    STATE(52), 7,
      sym__expression,
      sym_boolean,
      sym_string,
      sym_template_string,
      sym_call,
      sym_array,
      sym_object,
  [1153] = 2,
    ACTIONS(239), 4,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(237), 7,
      sym_url_literal,
      sym_pathname_literal,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [1169] = 5,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    ACTIONS(243), 1,
      anon_sym_header,
    ACTIONS(246), 1,
      anon_sym_body,
    ACTIONS(249), 1,
      anon_sym_SLASH_SLASH,
    STATE(43), 5,
      sym__statement,
      sym_header_statement,
      sym_body_statement,
      sym_line_comment,
      aux_sym_block_repeat1,
  [1189] = 5,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(254), 1,
      anon_sym_header,
    ACTIONS(256), 1,
      anon_sym_body,
    ACTIONS(258), 1,
      anon_sym_SLASH_SLASH,
    STATE(46), 5,
      sym__statement,
      sym_header_statement,
      sym_body_statement,
      sym_line_comment,
      aux_sym_block_repeat1,
  [1209] = 2,
    ACTIONS(71), 4,
      anon_sym_null,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(69), 5,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [1223] = 5,
    ACTIONS(254), 1,
      anon_sym_header,
    ACTIONS(256), 1,
      anon_sym_body,
    ACTIONS(258), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(43), 5,
      sym__statement,
      sym_header_statement,
      sym_body_statement,
      sym_line_comment,
      aux_sym_block_repeat1,
  [1243] = 5,
    ACTIONS(262), 1,
      anon_sym_BQUOTE,
    ACTIONS(264), 1,
      aux_sym_template_chars_token1,
    ACTIONS(266), 1,
      aux_sym_template_chars_token2,
    ACTIONS(268), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(51), 3,
      sym_template_chars,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [1261] = 5,
    ACTIONS(264), 1,
      aux_sym_template_chars_token1,
    ACTIONS(266), 1,
      aux_sym_template_chars_token2,
    ACTIONS(268), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(270), 1,
      anon_sym_BQUOTE,
    STATE(49), 3,
      sym_template_chars,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [1279] = 5,
    ACTIONS(264), 1,
      aux_sym_template_chars_token1,
    ACTIONS(266), 1,
      aux_sym_template_chars_token2,
    ACTIONS(268), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(272), 1,
      anon_sym_BQUOTE,
    STATE(50), 3,
      sym_template_chars,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [1297] = 5,
    ACTIONS(274), 1,
      anon_sym_BQUOTE,
    ACTIONS(276), 1,
      aux_sym_template_chars_token1,
    ACTIONS(279), 1,
      aux_sym_template_chars_token2,
    ACTIONS(282), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(50), 3,
      sym_template_chars,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [1315] = 5,
    ACTIONS(264), 1,
      aux_sym_template_chars_token1,
    ACTIONS(266), 1,
      aux_sym_template_chars_token2,
    ACTIONS(268), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      anon_sym_BQUOTE,
    STATE(50), 3,
      sym_template_chars,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [1333] = 3,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_parameter_list,
    ACTIONS(287), 4,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [1346] = 3,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_parameter_list,
    ACTIONS(291), 4,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [1359] = 5,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym_parameter_list,
    STATE(81), 1,
      aux_sym_array_repeat1,
  [1375] = 1,
    ACTIONS(105), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [1383] = 1,
    ACTIONS(81), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [1391] = 1,
    ACTIONS(93), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [1399] = 1,
    ACTIONS(101), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [1407] = 1,
    ACTIONS(77), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [1415] = 1,
    ACTIONS(85), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [1423] = 1,
    ACTIONS(89), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [1431] = 1,
    ACTIONS(97), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [1439] = 1,
    ACTIONS(113), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [1447] = 1,
    ACTIONS(117), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [1455] = 1,
    ACTIONS(109), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [1463] = 1,
    ACTIONS(73), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [1471] = 1,
    ACTIONS(69), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [1479] = 5,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_pair,
    STATE(98), 1,
      sym_string,
  [1495] = 5,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_pair,
    STATE(98), 1,
      sym_string,
  [1511] = 5,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym_parameter_list,
    STATE(83), 1,
      aux_sym_array_repeat1,
  [1527] = 2,
    ACTIONS(307), 1,
      aux_sym_template_chars_token1,
    ACTIONS(305), 3,
      anon_sym_BQUOTE,
      aux_sym_template_chars_token2,
      anon_sym_DOLLAR_LBRACE,
  [1536] = 4,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      sym_identifier,
    STATE(89), 1,
      sym_pair,
    STATE(98), 1,
      sym_string,
  [1549] = 3,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_parameter_list,
    ACTIONS(309), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1560] = 3,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_parameter_list,
    ACTIONS(311), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1571] = 1,
    ACTIONS(143), 4,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [1578] = 2,
    ACTIONS(315), 1,
      aux_sym_template_chars_token1,
    ACTIONS(313), 3,
      anon_sym_BQUOTE,
      aux_sym_template_chars_token2,
      anon_sym_DOLLAR_LBRACE,
  [1587] = 3,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_object_repeat1,
  [1597] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_object_repeat1,
  [1607] = 3,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_parameter_list,
  [1617] = 3,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_parameter_list,
  [1627] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_array_repeat1,
  [1637] = 3,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_object_repeat1,
  [1647] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_array_repeat1,
  [1657] = 3,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_array_repeat1,
  [1667] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_object_repeat1,
  [1677] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_object_repeat1,
  [1687] = 3,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_parameter_list,
  [1697] = 2,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym_string,
  [1704] = 1,
    ACTIONS(329), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1709] = 1,
    ACTIONS(347), 1,
      aux_sym_line_comment_token1,
  [1713] = 1,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
  [1717] = 1,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
  [1721] = 1,
    ACTIONS(351), 1,
      aux_sym_string_token1,
  [1725] = 1,
    ACTIONS(353), 1,
      anon_sym_EQ,
  [1729] = 1,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
  [1733] = 1,
    ACTIONS(357), 1,
      sym_identifier,
  [1737] = 1,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
  [1741] = 1,
    ACTIONS(361), 1,
      anon_sym_COLON,
  [1745] = 1,
    ACTIONS(363), 1,
      anon_sym_LF,
  [1749] = 1,
    ACTIONS(365), 1,
      sym_identifier,
  [1753] = 1,
    ACTIONS(367), 1,
      anon_sym_LF,
  [1757] = 1,
    ACTIONS(369), 1,
      sym_constant_identifier,
  [1761] = 1,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
  [1765] = 1,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
  [1769] = 1,
    ACTIONS(373), 1,
      aux_sym_string_token1,
  [1773] = 1,
    ACTIONS(375), 1,
      aux_sym_line_comment_token1,
  [1777] = 1,
    ACTIONS(377), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 30,
  [SMALL_STATE(6)] = 59,
  [SMALL_STATE(7)] = 88,
  [SMALL_STATE(8)] = 117,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 175,
  [SMALL_STATE(11)] = 204,
  [SMALL_STATE(12)] = 233,
  [SMALL_STATE(13)] = 262,
  [SMALL_STATE(14)] = 291,
  [SMALL_STATE(15)] = 320,
  [SMALL_STATE(16)] = 349,
  [SMALL_STATE(17)] = 378,
  [SMALL_STATE(18)] = 408,
  [SMALL_STATE(19)] = 438,
  [SMALL_STATE(20)] = 468,
  [SMALL_STATE(21)] = 498,
  [SMALL_STATE(22)] = 528,
  [SMALL_STATE(23)] = 553,
  [SMALL_STATE(24)] = 582,
  [SMALL_STATE(25)] = 622,
  [SMALL_STATE(26)] = 646,
  [SMALL_STATE(27)] = 670,
  [SMALL_STATE(28)] = 694,
  [SMALL_STATE(29)] = 736,
  [SMALL_STATE(30)] = 760,
  [SMALL_STATE(31)] = 784,
  [SMALL_STATE(32)] = 808,
  [SMALL_STATE(33)] = 850,
  [SMALL_STATE(34)] = 886,
  [SMALL_STATE(35)] = 922,
  [SMALL_STATE(36)] = 955,
  [SMALL_STATE(37)] = 988,
  [SMALL_STATE(38)] = 1021,
  [SMALL_STATE(39)] = 1054,
  [SMALL_STATE(40)] = 1087,
  [SMALL_STATE(41)] = 1120,
  [SMALL_STATE(42)] = 1153,
  [SMALL_STATE(43)] = 1169,
  [SMALL_STATE(44)] = 1189,
  [SMALL_STATE(45)] = 1209,
  [SMALL_STATE(46)] = 1223,
  [SMALL_STATE(47)] = 1243,
  [SMALL_STATE(48)] = 1261,
  [SMALL_STATE(49)] = 1279,
  [SMALL_STATE(50)] = 1297,
  [SMALL_STATE(51)] = 1315,
  [SMALL_STATE(52)] = 1333,
  [SMALL_STATE(53)] = 1346,
  [SMALL_STATE(54)] = 1359,
  [SMALL_STATE(55)] = 1375,
  [SMALL_STATE(56)] = 1383,
  [SMALL_STATE(57)] = 1391,
  [SMALL_STATE(58)] = 1399,
  [SMALL_STATE(59)] = 1407,
  [SMALL_STATE(60)] = 1415,
  [SMALL_STATE(61)] = 1423,
  [SMALL_STATE(62)] = 1431,
  [SMALL_STATE(63)] = 1439,
  [SMALL_STATE(64)] = 1447,
  [SMALL_STATE(65)] = 1455,
  [SMALL_STATE(66)] = 1463,
  [SMALL_STATE(67)] = 1471,
  [SMALL_STATE(68)] = 1479,
  [SMALL_STATE(69)] = 1495,
  [SMALL_STATE(70)] = 1511,
  [SMALL_STATE(71)] = 1527,
  [SMALL_STATE(72)] = 1536,
  [SMALL_STATE(73)] = 1549,
  [SMALL_STATE(74)] = 1560,
  [SMALL_STATE(75)] = 1571,
  [SMALL_STATE(76)] = 1578,
  [SMALL_STATE(77)] = 1587,
  [SMALL_STATE(78)] = 1597,
  [SMALL_STATE(79)] = 1607,
  [SMALL_STATE(80)] = 1617,
  [SMALL_STATE(81)] = 1627,
  [SMALL_STATE(82)] = 1637,
  [SMALL_STATE(83)] = 1647,
  [SMALL_STATE(84)] = 1657,
  [SMALL_STATE(85)] = 1667,
  [SMALL_STATE(86)] = 1677,
  [SMALL_STATE(87)] = 1687,
  [SMALL_STATE(88)] = 1697,
  [SMALL_STATE(89)] = 1704,
  [SMALL_STATE(90)] = 1709,
  [SMALL_STATE(91)] = 1713,
  [SMALL_STATE(92)] = 1717,
  [SMALL_STATE(93)] = 1721,
  [SMALL_STATE(94)] = 1725,
  [SMALL_STATE(95)] = 1729,
  [SMALL_STATE(96)] = 1733,
  [SMALL_STATE(97)] = 1737,
  [SMALL_STATE(98)] = 1741,
  [SMALL_STATE(99)] = 1745,
  [SMALL_STATE(100)] = 1749,
  [SMALL_STATE(101)] = 1753,
  [SMALL_STATE(102)] = 1757,
  [SMALL_STATE(103)] = 1761,
  [SMALL_STATE(104)] = 1765,
  [SMALL_STATE(105)] = 1769,
  [SMALL_STATE(106)] = 1773,
  [SMALL_STATE(107)] = 1777,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_declaration, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_declaration, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endpoint, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_method, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_method, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2, 0, 0),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_string_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_statement, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_statement, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_chars, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_chars, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_substitution, 3, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_substitution, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [349] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
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
