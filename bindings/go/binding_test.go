package tree_sitter_restedlang_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-restedlang"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_restedlang.Language())
	if language == nil {
		t.Errorf("Error loading Restedlang grammar")
	}
}
