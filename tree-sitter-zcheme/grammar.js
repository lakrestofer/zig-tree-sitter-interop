/// <reference types="tree-sitter-cli/dsl" />
// @ts-check


function regex(...patts) {
  return RegExp(patts.join(""));
}
module.exports = grammar({
  name: "zig_tree_sitter_interop",

  extras: $ => [
    /;.*\n/,
    /\p{White_Space}/u
  ],

  rules: {
    source_file: $ =>  repeat( $._lexeme),
    _lexeme: $ => choice(
        $.identifier, 
        $.boolean,
        // $.number,
        // $.character,
        // $.string,
        $.open_paren, // "("
        $.close_paren, // ")"
        $.open_square_paren, // "["
        $.close_square_paren, // "]"
        $.open_curly_paren, // "{" NOTE: this is for future extensions of the language
        $.close_curly_paren, // "}" // NOTE: this is for future extensions of the language
        $.open_vec_paren, // "#("
        $.open_byte_vec_paren, // "#vu8("
        $.quote, // "'"
        $.quasi_quote, // "`"
        $.unquote, // ","
        $.unquote_splicing, // ",@"
        $.period, // "."
        $.syntax, // "#'"
        $.quasi_syntax, // "#`"
        $.unsyntax, // "#,"
        $.unsyntax_splicing, // "#,@"
      ),
    delimiter: $ => choice(
      $.open_paren,
      $.close_paren,
      $.open_square_paren,
      $.close_square_paren,
      $.dubble_quote, 
      $.semi_colon,
      $.hashtag,
      $.whitespace,
    ),
    whitespace: $ => choice(
      $.character_tabulation,
      $.line_feed,
      $.line_tabulation,
      $.form_feed,
      $.carriage_return,
      $.next_line,
      $.space,
      $.line_separator,
      $.line_separator,
      $.paragraph_separator
    ),
    line_ending: $ => choice(
      $.line_feed,
      $.carriage_return,
      seq($.carriage_return, $.line_feed),
      $.line_separator
    ),
    // identifier begin
    identifier: $ => repeat1($.letter),
    // identifier: $ => choice(
    //   // seq($.initial, repeat($.subsequent)), 
    //   // $.peculiar_identifier
    // ),
    // initial: $ => choice(
    //   $.constituent,
    //   $.special_initial,
    //   // $.inline_hex_escape
    // ),
    letter: $ => /[a-zA-Z]/,
    // constituent: $ => choice(
    //   $.letter,
    //   // /\p{Lu}/u,
    //   // /\p{Ll}/u,
    //   // /\p{Lt}/u,
    //   // /\p{Lm}/u,
    //   // /\p{Lo}/u,
    //   // /\p{Mn}/u,
    //   // /\p{Nl}/u,
    //   // /\p{No}/u,
    //   // /\p{Pd}/u,
    //   // /\p{Pc}/u,
    //   // /\p{Po}/u,
    //   // /\p{Sc}/u,
    //   // /\p{Sm}/u,
    //   // /\p{Sk}/u,
    //   // /\p{So}/u,
    //   // /\p{Co}/u,
    // ),
    special_initial: $ => choice(
      "!",
      "$",
      "%",
      "&",
      "*",
      "/",
      ":",
      "<",
      "=",
      ">",
      "?",
      "^",
      "_",
      "~",
    ),
    subsequent: $ => choice(
      $.initial,
      $.digit,
      // $.special_subsequent
    ),
    digit: $ => /[\d]/,
    hex_digit: $ => choice(
      $.digit,
      /[a-fA-F]/
    ),
    // special_subsequent: $ => /[+-.@]/,
    // peculiar_identifier: $ => choice(
    //   "+",
    //   "-",
    //   "...",
    //   seq(
    //     "->",
    //     $.subsequent
    //   )
    // ),
    // identifier end
    boolean: $ => choice("#t", "#f", "#true", "#false"),
    // some lexemes and delimiters
    open_paren: $ => token("("),
    close_paren: $ => token(")"),
    open_square_paren: $ => token("["),
    close_square_paren: $ => token("]"),
    open_curly_paren: $ => token("{"),
    close_curly_paren: $ => token("}"),
    open_vec_paren: $ => token("#("),
    open_byte_vec_paren: $ => token("#vu8("),
    quote: $ => token("'"),
    quasi_quote: $ => token("`"),
    unquote: $ => token(","),
    unquote_splicing: $ => token(",@"),
    period: $ => token("."),
    syntax: $ => token("#'"),
    quasi_syntax: $ => token("#`"),
    unsyntax: $ => token("#,"),
    unsyntax_splicing: $ => token("#,@"),
    // delimiters
    dubble_quote: $ => token("\""),
    semi_colon: $ => token(";"),
    hashtag: $ => token("#"), // this token is presented by gen-z gang
    // whitespace tokens
    character_tabulation: $ => token("\t"),
    line_feed: $ => token("\n"),
    line_tabulation: $ => token("\v"),
    form_feed: $ => token("\f"),
    carriage_return: $ => token("\r"),
    next_line: $ => token("\u0085"),
    space: $ => token(" "),
    line_separator: $ => token("\u2028"),
    paragraph_separator: $ => token("\u2029"),
    // comments
  }
});
