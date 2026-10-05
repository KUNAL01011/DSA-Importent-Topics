## Trie (Prefix Tree)

**Definition:**
A Trie is a **tree-based data structure for storing strings**, where each path from the root represents a sequence of characters.

**When to use:**
When you need fast **word search, prefix search, autocomplete, or dictionary-like operations**.

**Why:**
Words with the same prefix **share the same path**, avoiding repeated storage and making searches depend on the word length rather than the number of words.

**How it works:**
`insert()` creates/reuses a path for each character → `search()` follows the path and checks `word` → `startWith()` only checks whether the prefix path exists.

**Complexity:** `O(L)` per operation, where `L` = length of the word/prefix; **Space:** `O(total characters)`.
