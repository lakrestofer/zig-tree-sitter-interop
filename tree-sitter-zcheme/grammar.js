/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "zig_tree_sitter_interop",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
