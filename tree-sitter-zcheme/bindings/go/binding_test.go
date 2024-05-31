package tree_sitter_zig_tree_sitter_interop_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-zig_tree_sitter_interop"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_zig_tree_sitter_interop.Language())
	if language == nil {
		t.Errorf("Error loading ZigTreeSitterInterop grammar")
	}
}
