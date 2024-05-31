#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 6
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_letter = 1,
  anon_sym_BANG = 2,
  anon_sym_DOLLAR = 3,
  anon_sym_PERCENT = 4,
  anon_sym_AMP = 5,
  anon_sym_STAR = 6,
  anon_sym_SLASH = 7,
  anon_sym_COLON = 8,
  anon_sym_LT = 9,
  anon_sym_EQ = 10,
  anon_sym_GT = 11,
  anon_sym_QMARK = 12,
  anon_sym_CARET = 13,
  anon_sym__ = 14,
  anon_sym_TILDE = 15,
  sym_digit = 16,
  aux_sym_hex_digit_token1 = 17,
  anon_sym_POUNDt = 18,
  anon_sym_POUNDf = 19,
  anon_sym_POUNDtrue = 20,
  anon_sym_POUNDfalse = 21,
  sym_open_paren = 22,
  sym_close_paren = 23,
  sym_open_square_paren = 24,
  sym_close_square_paren = 25,
  sym_open_curly_paren = 26,
  sym_close_curly_paren = 27,
  sym_open_vec_paren = 28,
  sym_open_byte_vec_paren = 29,
  sym_quote = 30,
  sym_quasi_quote = 31,
  sym_unquote = 32,
  sym_unquote_splicing = 33,
  sym_period = 34,
  sym_syntax = 35,
  sym_quasi_syntax = 36,
  sym_unsyntax = 37,
  sym_unsyntax_splicing = 38,
  sym_dubble_quote = 39,
  sym_hashtag = 40,
  sym_source_file = 41,
  sym__lexeme = 42,
  sym_boolean = 43,
  aux_sym_source_file_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_letter] = "letter",
  [anon_sym_BANG] = "!",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON] = ":",
  [anon_sym_LT] = "<",
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [anon_sym_QMARK] = "\?",
  [anon_sym_CARET] = "^",
  [anon_sym__] = "_",
  [anon_sym_TILDE] = "~",
  [sym_digit] = "digit",
  [aux_sym_hex_digit_token1] = "hex_digit_token1",
  [anon_sym_POUNDt] = "#t",
  [anon_sym_POUNDf] = "#f",
  [anon_sym_POUNDtrue] = "#true",
  [anon_sym_POUNDfalse] = "#false",
  [sym_open_paren] = "open_paren",
  [sym_close_paren] = "close_paren",
  [sym_open_square_paren] = "open_square_paren",
  [sym_close_square_paren] = "close_square_paren",
  [sym_open_curly_paren] = "open_curly_paren",
  [sym_close_curly_paren] = "close_curly_paren",
  [sym_open_vec_paren] = "open_vec_paren",
  [sym_open_byte_vec_paren] = "open_byte_vec_paren",
  [sym_quote] = "quote",
  [sym_quasi_quote] = "quasi_quote",
  [sym_unquote] = "unquote",
  [sym_unquote_splicing] = "unquote_splicing",
  [sym_period] = "period",
  [sym_syntax] = "syntax",
  [sym_quasi_syntax] = "quasi_syntax",
  [sym_unsyntax] = "unsyntax",
  [sym_unsyntax_splicing] = "unsyntax_splicing",
  [sym_dubble_quote] = "dubble_quote",
  [sym_hashtag] = "hashtag",
  [sym_source_file] = "source_file",
  [sym__lexeme] = "_lexeme",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_letter] = sym_letter,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym__] = anon_sym__,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [sym_digit] = sym_digit,
  [aux_sym_hex_digit_token1] = aux_sym_hex_digit_token1,
  [anon_sym_POUNDt] = anon_sym_POUNDt,
  [anon_sym_POUNDf] = anon_sym_POUNDf,
  [anon_sym_POUNDtrue] = anon_sym_POUNDtrue,
  [anon_sym_POUNDfalse] = anon_sym_POUNDfalse,
  [sym_open_paren] = sym_open_paren,
  [sym_close_paren] = sym_close_paren,
  [sym_open_square_paren] = sym_open_square_paren,
  [sym_close_square_paren] = sym_close_square_paren,
  [sym_open_curly_paren] = sym_open_curly_paren,
  [sym_close_curly_paren] = sym_close_curly_paren,
  [sym_open_vec_paren] = sym_open_vec_paren,
  [sym_open_byte_vec_paren] = sym_open_byte_vec_paren,
  [sym_quote] = sym_quote,
  [sym_quasi_quote] = sym_quasi_quote,
  [sym_unquote] = sym_unquote,
  [sym_unquote_splicing] = sym_unquote_splicing,
  [sym_period] = sym_period,
  [sym_syntax] = sym_syntax,
  [sym_quasi_syntax] = sym_quasi_syntax,
  [sym_unsyntax] = sym_unsyntax,
  [sym_unsyntax_splicing] = sym_unsyntax_splicing,
  [sym_dubble_quote] = sym_dubble_quote,
  [sym_hashtag] = sym_hashtag,
  [sym_source_file] = sym_source_file,
  [sym__lexeme] = sym__lexeme,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_letter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_hex_digit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUNDt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDtrue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDfalse] = {
    .visible = true,
    .named = false,
  },
  [sym_open_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_close_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_open_square_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_close_square_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_open_curly_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_close_curly_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_open_vec_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_open_byte_vec_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_quasi_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_splicing] = {
    .visible = true,
    .named = true,
  },
  [sym_period] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_quasi_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_unsyntax] = {
    .visible = true,
    .named = true,
  },
  [sym_unsyntax_splicing] = {
    .visible = true,
    .named = true,
  },
  [sym_dubble_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_hashtag] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__lexeme] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static TSCharacterRange extras_character_set_1[] = {
  {'\t', '\r'}, {' ', ' '}, {0x85, 0x85}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x2028, 0x2029}, {0x202f, 0x202f},
  {0x205f, 0x205f}, {0x3000, 0x3000},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '!', 15,
        '"', 51,
        '#', 52,
        '$', 16,
        '%', 17,
        '&', 18,
        '\'', 42,
        '(', 34,
        ')', 35,
        '*', 19,
        ',', 44,
        '.', 46,
        '/', 20,
        ':', 21,
      );
      if (lookahead == ';') SKIP(10);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '^') ADVANCE(26);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '`') ADVANCE(43);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '~') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      if (set_contains(extras_character_set_1, 10, lookahead)) SKIP(0);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '8') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(4);
      END_STATE();
    case 10:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') SKIP(0);
      if (lookahead != 0) SKIP(10);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') SKIP(12);
      if (lookahead != 0) SKIP(11);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == ';') SKIP(11);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '`') ADVANCE(43);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (set_contains(extras_character_set_1, 10, lookahead)) SKIP(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_letter);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_POUNDt);
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_POUNDf);
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_POUNDtrue);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_POUNDfalse);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_open_paren);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_close_paren);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_open_square_paren);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_close_square_paren);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_open_curly_paren);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_close_curly_paren);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_open_vec_paren);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_open_byte_vec_paren);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_quote);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_quasi_quote);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_unquote);
      if (lookahead == '@') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_unquote_splicing);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_period);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_syntax);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_quasi_syntax);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_unsyntax);
      if (lookahead == '@') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_unsyntax_splicing);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_dubble_quote);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_hashtag);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_letter] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [aux_sym_hex_digit_token1] = ACTIONS(1),
    [anon_sym_POUNDt] = ACTIONS(1),
    [anon_sym_POUNDf] = ACTIONS(1),
    [anon_sym_POUNDtrue] = ACTIONS(1),
    [anon_sym_POUNDfalse] = ACTIONS(1),
    [sym_open_paren] = ACTIONS(1),
    [sym_close_paren] = ACTIONS(1),
    [sym_open_square_paren] = ACTIONS(1),
    [sym_close_square_paren] = ACTIONS(1),
    [sym_open_curly_paren] = ACTIONS(1),
    [sym_close_curly_paren] = ACTIONS(1),
    [sym_open_vec_paren] = ACTIONS(1),
    [sym_open_byte_vec_paren] = ACTIONS(1),
    [sym_quote] = ACTIONS(1),
    [sym_quasi_quote] = ACTIONS(1),
    [sym_unquote] = ACTIONS(1),
    [sym_unquote_splicing] = ACTIONS(1),
    [sym_period] = ACTIONS(1),
    [sym_syntax] = ACTIONS(1),
    [sym_quasi_syntax] = ACTIONS(1),
    [sym_unsyntax] = ACTIONS(1),
    [sym_unsyntax_splicing] = ACTIONS(1),
    [sym_dubble_quote] = ACTIONS(1),
    [sym_hashtag] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(5),
    [sym__lexeme] = STATE(2),
    [sym_boolean] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUNDt] = ACTIONS(5),
    [anon_sym_POUNDf] = ACTIONS(5),
    [anon_sym_POUNDtrue] = ACTIONS(7),
    [anon_sym_POUNDfalse] = ACTIONS(7),
    [sym_open_paren] = ACTIONS(9),
    [sym_close_paren] = ACTIONS(9),
    [sym_open_square_paren] = ACTIONS(9),
    [sym_close_square_paren] = ACTIONS(9),
    [sym_open_curly_paren] = ACTIONS(9),
    [sym_close_curly_paren] = ACTIONS(9),
    [sym_open_vec_paren] = ACTIONS(9),
    [sym_open_byte_vec_paren] = ACTIONS(9),
    [sym_quote] = ACTIONS(9),
    [sym_quasi_quote] = ACTIONS(9),
    [sym_unquote] = ACTIONS(11),
    [sym_unquote_splicing] = ACTIONS(9),
    [sym_period] = ACTIONS(9),
    [sym_syntax] = ACTIONS(9),
    [sym_quasi_syntax] = ACTIONS(9),
    [sym_unsyntax] = ACTIONS(11),
    [sym_unsyntax_splicing] = ACTIONS(9),
  },
  [2] = {
    [sym__lexeme] = STATE(3),
    [sym_boolean] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_POUNDt] = ACTIONS(5),
    [anon_sym_POUNDf] = ACTIONS(5),
    [anon_sym_POUNDtrue] = ACTIONS(7),
    [anon_sym_POUNDfalse] = ACTIONS(7),
    [sym_open_paren] = ACTIONS(15),
    [sym_close_paren] = ACTIONS(15),
    [sym_open_square_paren] = ACTIONS(15),
    [sym_close_square_paren] = ACTIONS(15),
    [sym_open_curly_paren] = ACTIONS(15),
    [sym_close_curly_paren] = ACTIONS(15),
    [sym_open_vec_paren] = ACTIONS(15),
    [sym_open_byte_vec_paren] = ACTIONS(15),
    [sym_quote] = ACTIONS(15),
    [sym_quasi_quote] = ACTIONS(15),
    [sym_unquote] = ACTIONS(17),
    [sym_unquote_splicing] = ACTIONS(15),
    [sym_period] = ACTIONS(15),
    [sym_syntax] = ACTIONS(15),
    [sym_quasi_syntax] = ACTIONS(15),
    [sym_unsyntax] = ACTIONS(17),
    [sym_unsyntax_splicing] = ACTIONS(15),
  },
  [3] = {
    [sym__lexeme] = STATE(3),
    [sym_boolean] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_POUNDt] = ACTIONS(21),
    [anon_sym_POUNDf] = ACTIONS(21),
    [anon_sym_POUNDtrue] = ACTIONS(24),
    [anon_sym_POUNDfalse] = ACTIONS(24),
    [sym_open_paren] = ACTIONS(27),
    [sym_close_paren] = ACTIONS(27),
    [sym_open_square_paren] = ACTIONS(27),
    [sym_close_square_paren] = ACTIONS(27),
    [sym_open_curly_paren] = ACTIONS(27),
    [sym_close_curly_paren] = ACTIONS(27),
    [sym_open_vec_paren] = ACTIONS(27),
    [sym_open_byte_vec_paren] = ACTIONS(27),
    [sym_quote] = ACTIONS(27),
    [sym_quasi_quote] = ACTIONS(27),
    [sym_unquote] = ACTIONS(30),
    [sym_unquote_splicing] = ACTIONS(27),
    [sym_period] = ACTIONS(27),
    [sym_syntax] = ACTIONS(27),
    [sym_quasi_syntax] = ACTIONS(27),
    [sym_unsyntax] = ACTIONS(30),
    [sym_unsyntax_splicing] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(35), 4,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(33), 18,
      ts_builtin_sym_end,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      sym_open_paren,
      sym_close_paren,
      sym_open_square_paren,
      sym_close_square_paren,
      sym_open_curly_paren,
      sym_close_curly_paren,
      sym_open_vec_paren,
      sym_open_byte_vec_paren,
      sym_quote,
      sym_quasi_quote,
      sym_unquote_splicing,
      sym_period,
      sym_syntax,
      sym_quasi_syntax,
      sym_unsyntax_splicing,
  [27] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 27,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_zig_tree_sitter_interop(void) {
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
