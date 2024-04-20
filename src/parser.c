#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SEMI_SEMI = 1,
  aux_sym_line_comment_token1 = 2,
  anon_sym_POUND_PIPE = 3,
  aux_sym_block_comment_token1 = 4,
  anon_sym_PIPE_POUND = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  sym_unquoted_item = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_quoted_item_token1 = 10,
  sym_kanata = 11,
  sym_line_comment = 12,
  sym_block_comment = 13,
  sym_list = 14,
  sym__item = 15,
  sym_quoted_item = 16,
  aux_sym_kanata_repeat1 = 17,
  aux_sym_list_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI_SEMI] = ";;",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_PIPE_POUND] = "|#",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_unquoted_item] = "unquoted_item",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_item_token1] = "quoted_item_token1",
  [sym_kanata] = "kanata",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_list] = "list",
  [sym__item] = "_item",
  [sym_quoted_item] = "quoted_item",
  [aux_sym_kanata_repeat1] = "kanata_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI_SEMI] = anon_sym_SEMI_SEMI,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_unquoted_item] = sym_unquoted_item,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_item_token1] = aux_sym_quoted_item_token1,
  [sym_kanata] = sym_kanata,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_list] = sym_list,
  [sym__item] = sym__item,
  [sym_quoted_item] = sym_quoted_item,
  [aux_sym_kanata_repeat1] = aux_sym_kanata_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_POUND] = {
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
  [sym_unquoted_item] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_item_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_kanata] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_item] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_kanata_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 7,
  [15] = 8,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
};

static TSCharacterRange extras_character_set_1[] = {
  {'\n', '\n'}, {'\r', '\r'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x202f, 0x202f}, {0x205f, 0x205f},
  {0x3000, 0x3000},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == ';') ADVANCE(3);
      if (lookahead == '|') ADVANCE(2);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(23);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == ';') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '|') ADVANCE(14);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(26);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(31);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == ';') ADVANCE(11);
      if ((set_contains(extras_character_set_1, 9, lookahead)) &&
          lookahead != '\n') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '|') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(26);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(31);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '.') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_unquoted_item);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(23);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_unquoted_item);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_unquoted_item);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_unquoted_item);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_quoted_item_token1);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == ';') ADVANCE(29);
      if (set_contains(extras_character_set_1, 9, lookahead)) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_quoted_item_token1);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_quoted_item_token1);
      if (lookahead == '|') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_quoted_item_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(31);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 18},
  [23] = {(TSStateId)(-1)},
  [24] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI_SEMI] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_kanata] = STATE(21),
    [sym_line_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [sym_list] = STATE(16),
    [aux_sym_kanata_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SEMI_SEMI] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
  [2] = {
    [sym_line_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_list] = STATE(11),
    [sym__item] = STATE(13),
    [sym_quoted_item] = STATE(11),
    [aux_sym_list_repeat1] = STATE(6),
    [anon_sym_SEMI_SEMI] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(17),
    [sym_unquoted_item] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
  },
  [3] = {
    [sym_line_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_list] = STATE(11),
    [sym__item] = STATE(13),
    [sym_quoted_item] = STATE(11),
    [aux_sym_list_repeat1] = STATE(6),
    [anon_sym_SEMI_SEMI] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(23),
    [sym_unquoted_item] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
  },
  [4] = {
    [sym_line_comment] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym_list] = STATE(11),
    [sym__item] = STATE(13),
    [sym_quoted_item] = STATE(11),
    [aux_sym_list_repeat1] = STATE(3),
    [anon_sym_SEMI_SEMI] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(25),
    [sym_unquoted_item] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
  },
  [5] = {
    [sym_line_comment] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym_list] = STATE(11),
    [sym__item] = STATE(13),
    [sym_quoted_item] = STATE(11),
    [aux_sym_list_repeat1] = STATE(2),
    [anon_sym_SEMI_SEMI] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(27),
    [sym_unquoted_item] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
  },
  [6] = {
    [sym_line_comment] = STATE(6),
    [sym_block_comment] = STATE(6),
    [sym_list] = STATE(11),
    [sym__item] = STATE(13),
    [sym_quoted_item] = STATE(11),
    [aux_sym_list_repeat1] = STATE(6),
    [anon_sym_SEMI_SEMI] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(32),
    [sym_unquoted_item] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    STATE(7), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(40), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_unquoted_item,
      anon_sym_DQUOTE,
  [17] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    STATE(8), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(42), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_unquoted_item,
      anon_sym_DQUOTE,
  [34] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      aux_sym_kanata_repeat1,
    STATE(16), 1,
      sym_list,
    STATE(9), 2,
      sym_line_comment,
      sym_block_comment,
  [57] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    STATE(10), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(46), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_unquoted_item,
      anon_sym_DQUOTE,
  [74] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    STATE(11), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(48), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_unquoted_item,
      anon_sym_DQUOTE,
  [91] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_list,
    STATE(12), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_kanata_repeat1,
  [112] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    STATE(13), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(55), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_unquoted_item,
      anon_sym_DQUOTE,
  [129] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    STATE(14), 2,
      sym_line_comment,
      sym_block_comment,
  [144] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    STATE(15), 2,
      sym_line_comment,
      sym_block_comment,
  [159] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    STATE(16), 2,
      sym_line_comment,
      sym_block_comment,
  [174] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(63), 1,
      aux_sym_line_comment_token1,
    STATE(17), 2,
      sym_line_comment,
      sym_block_comment,
  [188] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(18), 2,
      sym_line_comment,
      sym_block_comment,
  [202] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(67), 1,
      aux_sym_quoted_item_token1,
    STATE(19), 2,
      sym_line_comment,
      sym_block_comment,
  [216] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(69), 1,
      anon_sym_PIPE_POUND,
    STATE(20), 2,
      sym_line_comment,
      sym_block_comment,
  [230] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(21), 2,
      sym_line_comment,
      sym_block_comment,
  [244] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(13), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(73), 1,
      aux_sym_block_comment_token1,
    STATE(22), 2,
      sym_line_comment,
      sym_block_comment,
  [258] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [262] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 17,
  [SMALL_STATE(9)] = 34,
  [SMALL_STATE(10)] = 57,
  [SMALL_STATE(11)] = 74,
  [SMALL_STATE(12)] = 91,
  [SMALL_STATE(13)] = 112,
  [SMALL_STATE(14)] = 129,
  [SMALL_STATE(15)] = 144,
  [SMALL_STATE(16)] = 159,
  [SMALL_STATE(17)] = 174,
  [SMALL_STATE(18)] = 188,
  [SMALL_STATE(19)] = 202,
  [SMALL_STATE(20)] = 216,
  [SMALL_STATE(21)] = 230,
  [SMALL_STATE(22)] = 244,
  [SMALL_STATE(23)] = 258,
  [SMALL_STATE(24)] = 262,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kanata, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kanata, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_item, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_kanata_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kanata_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_kanata_repeat1, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [71] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_kanata(void) {
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
