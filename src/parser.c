#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
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
  anon_sym_DQUOTE = 16,
  aux_sym_string_token1 = 17,
  anon_sym_true = 18,
  anon_sym_false = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_LBRACE = 22,
  anon_sym_RBRACE = 23,
  anon_sym_header = 24,
  anon_sym_body = 25,
  anon_sym_SLASH_SLASH = 26,
  aux_sym_line_comment_token1 = 27,
  anon_sym_LF = 28,
  sym_source_file = 29,
  sym_item = 30,
  sym_request = 31,
  sym_request_method = 32,
  sym_endpoint = 33,
  sym__declaration = 34,
  sym_constant_declaration = 35,
  sym_variable_declaration = 36,
  sym_attribute = 37,
  sym__expression = 38,
  sym_string = 39,
  sym_boolean = 40,
  sym_call = 41,
  sym_parameter_list = 42,
  sym_block = 43,
  sym__statement = 44,
  sym_header_statement = 45,
  sym_body_statement = 46,
  sym_line_comment = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_block_repeat1 = 49,
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
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_call] = "call",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_header_statement] = "header_statement",
  [sym_body_statement] = "body_statement",
  [sym_line_comment] = "line_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym_call] = sym_call,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_header_statement] = sym_header_statement,
  [sym_body_statement] = sym_body_statement,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
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
  [anon_sym_RBRACE] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 7,
  [34] = 34,
  [35] = 35,
  [36] = 8,
  [37] = 7,
  [38] = 5,
  [39] = 9,
  [40] = 4,
  [41] = 15,
  [42] = 42,
  [43] = 42,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 50,
  [54] = 47,
  [55] = 55,
  [56] = 56,
  [57] = 51,
  [58] = 50,
  [59] = 49,
  [60] = 45,
  [61] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      ADVANCE_MAP(
        '"', 105,
        '(', 112,
        ')', 113,
        '/', 4,
        '=', 64,
        '@', 65,
        'b', 28,
        'd', 13,
        'f', 8,
        'g', 14,
        'h', 18,
        'l', 20,
        'n', 42,
        'p', 9,
        's', 21,
        't', 31,
        '{', 114,
        '}', 115,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(102);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 't') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 't') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(118);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 44:
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 45:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      ADVANCE_MAP(
        '"', 105,
        '(', 112,
        ')', 113,
        '/', 4,
        '@', 65,
        'd', 73,
        'f', 70,
        'g', 74,
        'l', 78,
        'n', 99,
        'p', 71,
        's', 79,
        't', 87,
        '{', 114,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_get);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_post);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_put);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_patch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_url_literal);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_pathname_literal);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 's') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == ':') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'a') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'c') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'h') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'l') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'l') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'l') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'l') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'p') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'r') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 's') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 's') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 't') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'u') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifer);
      if (lookahead == 'u') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_constant_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(121);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 46},
  [2] = {.lex_state = 46},
  [3] = {.lex_state = 46},
  [4] = {.lex_state = 46},
  [5] = {.lex_state = 46},
  [6] = {.lex_state = 46},
  [7] = {.lex_state = 46},
  [8] = {.lex_state = 46},
  [9] = {.lex_state = 46},
  [10] = {.lex_state = 46},
  [11] = {.lex_state = 46},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 46},
  [14] = {.lex_state = 46},
  [15] = {.lex_state = 46},
  [16] = {.lex_state = 46},
  [17] = {.lex_state = 46},
  [18] = {.lex_state = 46},
  [19] = {.lex_state = 46},
  [20] = {.lex_state = 46},
  [21] = {.lex_state = 46},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 119},
  [46] = {.lex_state = 45},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 45},
  [49] = {.lex_state = 106},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 106},
  [60] = {.lex_state = 119},
  [61] = {.lex_state = 106},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_body] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(52),
    [sym_item] = STATE(2),
    [sym_request] = STATE(17),
    [sym_request_method] = STATE(22),
    [sym__declaration] = STATE(17),
    [sym_constant_declaration] = STATE(17),
    [sym_variable_declaration] = STATE(17),
    [sym_attribute] = STATE(17),
    [sym__expression] = STATE(10),
    [sym_string] = STATE(10),
    [sym_boolean] = STATE(10),
    [sym_call] = STATE(10),
    [sym_line_comment] = STATE(17),
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
    [sym_identifer] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
  },
  [2] = {
    [sym_item] = STATE(3),
    [sym_request] = STATE(17),
    [sym_request_method] = STATE(22),
    [sym__declaration] = STATE(17),
    [sym_constant_declaration] = STATE(17),
    [sym_variable_declaration] = STATE(17),
    [sym_attribute] = STATE(17),
    [sym__expression] = STATE(10),
    [sym_string] = STATE(10),
    [sym_boolean] = STATE(10),
    [sym_call] = STATE(10),
    [sym_line_comment] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
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
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
  },
  [3] = {
    [sym_item] = STATE(3),
    [sym_request] = STATE(17),
    [sym_request_method] = STATE(22),
    [sym__declaration] = STATE(17),
    [sym_constant_declaration] = STATE(17),
    [sym_variable_declaration] = STATE(17),
    [sym_attribute] = STATE(17),
    [sym__expression] = STATE(10),
    [sym_string] = STATE(10),
    [sym_boolean] = STATE(10),
    [sym_call] = STATE(10),
    [sym_line_comment] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(48),
    [anon_sym_false] = ACTIONS(48),
    [anon_sym_SLASH_SLASH] = ACTIONS(51),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(54), 8,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(56), 11,
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
  [24] = 2,
    ACTIONS(58), 8,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(60), 11,
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
  [48] = 4,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_parameter_list,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(64), 11,
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
  [76] = 2,
    ACTIONS(68), 8,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(70), 11,
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
  [100] = 2,
    ACTIONS(72), 8,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(74), 11,
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
  [124] = 2,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(78), 11,
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
  [148] = 4,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_parameter_list,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(82), 11,
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
  [175] = 4,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_parameter_list,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(86), 11,
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
  [202] = 4,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_parameter_list,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(90), 11,
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
  [229] = 4,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(94), 11,
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
  [256] = 4,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_parameter_list,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(100), 11,
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
  [283] = 2,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 11,
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
  [305] = 2,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_SLASH_SLASH,
    ACTIONS(64), 11,
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
  [327] = 2,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(82), 11,
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
  [348] = 2,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(108), 11,
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
  [369] = 2,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(112), 11,
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
  [390] = 2,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(116), 11,
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
  [411] = 2,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SLASH_SLASH,
    ACTIONS(120), 11,
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
  [432] = 7,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      sym_number,
    STATE(13), 1,
      sym_endpoint,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 2,
      sym_url_literal,
      sym_pathname_literal,
    ACTIONS(124), 2,
      anon_sym_null,
      sym_identifer,
    STATE(6), 4,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_call,
  [460] = 8,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(130), 1,
      sym_number,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_line_comment,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_null,
      sym_identifer,
    STATE(42), 4,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_call,
  [490] = 8,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(136), 1,
      sym_number,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_line_comment,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(134), 2,
      anon_sym_null,
      sym_identifer,
    STATE(43), 4,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_call,
  [520] = 5,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(140), 2,
      anon_sym_null,
      sym_identifer,
    STATE(11), 4,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_call,
  [541] = 5,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(146), 1,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(144), 2,
      anon_sym_null,
      sym_identifer,
    STATE(14), 4,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_call,
  [562] = 5,
    ACTIONS(150), 1,
      sym_number,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 2,
      anon_sym_null,
      sym_identifer,
    ACTIONS(154), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 4,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_call,
  [583] = 5,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      sym_number,
    ACTIONS(154), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(156), 2,
      anon_sym_null,
      sym_identifer,
    STATE(35), 4,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_call,
  [604] = 5,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_body,
    ACTIONS(166), 1,
      anon_sym_SLASH_SLASH,
    STATE(30), 5,
      sym__statement,
      sym_header_statement,
      sym_body_statement,
      sym_line_comment,
      aux_sym_block_repeat1,
  [624] = 5,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_body,
    ACTIONS(166), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(31), 5,
      sym__statement,
      sym_header_statement,
      sym_body_statement,
      sym_line_comment,
      aux_sym_block_repeat1,
  [644] = 5,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(172), 1,
      anon_sym_header,
    ACTIONS(175), 1,
      anon_sym_body,
    ACTIONS(178), 1,
      anon_sym_SLASH_SLASH,
    STATE(31), 5,
      sym__statement,
      sym_header_statement,
      sym_body_statement,
      sym_line_comment,
      aux_sym_block_repeat1,
  [664] = 2,
    ACTIONS(181), 4,
      sym_url_literal,
      sym_pathname_literal,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(183), 4,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [677] = 2,
    ACTIONS(68), 2,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(70), 4,
      anon_sym_null,
      sym_identifer,
      anon_sym_true,
      anon_sym_false,
  [688] = 3,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_parameter_list,
    ACTIONS(187), 4,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [701] = 3,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_parameter_list,
    ACTIONS(189), 4,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [714] = 1,
    ACTIONS(72), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [722] = 1,
    ACTIONS(68), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [730] = 1,
    ACTIONS(58), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [738] = 1,
    ACTIONS(76), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [746] = 1,
    ACTIONS(54), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [754] = 1,
    ACTIONS(102), 4,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_body,
      anon_sym_SLASH_SLASH,
  [761] = 3,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_parameter_list,
  [771] = 3,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_parameter_list,
  [781] = 2,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_string,
  [788] = 1,
    ACTIONS(197), 1,
      aux_sym_line_comment_token1,
  [792] = 1,
    ACTIONS(199), 1,
      sym_identifer,
  [796] = 1,
    ACTIONS(201), 1,
      anon_sym_LF,
  [800] = 1,
    ACTIONS(203), 1,
      sym_identifer,
  [804] = 1,
    ACTIONS(205), 1,
      aux_sym_string_token1,
  [808] = 1,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
  [812] = 1,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
  [816] = 1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [820] = 1,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
  [824] = 1,
    ACTIONS(213), 1,
      anon_sym_LF,
  [828] = 1,
    ACTIONS(215), 1,
      sym_constant_identifier,
  [832] = 1,
    ACTIONS(217), 1,
      anon_sym_EQ,
  [836] = 1,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
  [840] = 1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
  [844] = 1,
    ACTIONS(221), 1,
      aux_sym_string_token1,
  [848] = 1,
    ACTIONS(223), 1,
      aux_sym_line_comment_token1,
  [852] = 1,
    ACTIONS(225), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 24,
  [SMALL_STATE(6)] = 48,
  [SMALL_STATE(7)] = 76,
  [SMALL_STATE(8)] = 100,
  [SMALL_STATE(9)] = 124,
  [SMALL_STATE(10)] = 148,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 202,
  [SMALL_STATE(13)] = 229,
  [SMALL_STATE(14)] = 256,
  [SMALL_STATE(15)] = 283,
  [SMALL_STATE(16)] = 305,
  [SMALL_STATE(17)] = 327,
  [SMALL_STATE(18)] = 348,
  [SMALL_STATE(19)] = 369,
  [SMALL_STATE(20)] = 390,
  [SMALL_STATE(21)] = 411,
  [SMALL_STATE(22)] = 432,
  [SMALL_STATE(23)] = 460,
  [SMALL_STATE(24)] = 490,
  [SMALL_STATE(25)] = 520,
  [SMALL_STATE(26)] = 541,
  [SMALL_STATE(27)] = 562,
  [SMALL_STATE(28)] = 583,
  [SMALL_STATE(29)] = 604,
  [SMALL_STATE(30)] = 624,
  [SMALL_STATE(31)] = 644,
  [SMALL_STATE(32)] = 664,
  [SMALL_STATE(33)] = 677,
  [SMALL_STATE(34)] = 688,
  [SMALL_STATE(35)] = 701,
  [SMALL_STATE(36)] = 714,
  [SMALL_STATE(37)] = 722,
  [SMALL_STATE(38)] = 730,
  [SMALL_STATE(39)] = 738,
  [SMALL_STATE(40)] = 746,
  [SMALL_STATE(41)] = 754,
  [SMALL_STATE(42)] = 761,
  [SMALL_STATE(43)] = 771,
  [SMALL_STATE(44)] = 781,
  [SMALL_STATE(45)] = 788,
  [SMALL_STATE(46)] = 792,
  [SMALL_STATE(47)] = 796,
  [SMALL_STATE(48)] = 800,
  [SMALL_STATE(49)] = 804,
  [SMALL_STATE(50)] = 808,
  [SMALL_STATE(51)] = 812,
  [SMALL_STATE(52)] = 816,
  [SMALL_STATE(53)] = 820,
  [SMALL_STATE(54)] = 824,
  [SMALL_STATE(55)] = 828,
  [SMALL_STATE(56)] = 832,
  [SMALL_STATE(57)] = 836,
  [SMALL_STATE(58)] = 840,
  [SMALL_STATE(59)] = 844,
  [SMALL_STATE(60)] = 848,
  [SMALL_STATE(61)] = 852,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endpoint, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_declaration, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_declaration, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_method, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_method, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_statement, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_statement, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
