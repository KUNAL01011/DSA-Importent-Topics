## Longest Common Subsequence (LCS) — Dynamic Programming

**Definition:**  
LCS finds the **longest sequence of characters that appears in both strings in the same order**, but the characters do not need to be contiguous.

**When to use:**  
When comparing two strings/sequences where you need the **longest matching sequence while preserving order**.

**Why:**  
At each pair `(i1, i2)`, either the characters match, or we must try skipping a character from one of the strings.

**How it works:**  
If `s1[i1] == s2[i2]` → `1 + LCS(i1+1, i2+1)`; otherwise → `max(LCS(i1+1,i2), LCS(i1,i2+1))`.

**Key idea:**  
`Match → Diagonal + 1` | `No match → Max(Down, Left)`

**DP state:**  
`dp[i][j]` = LCS length of the first `i` characters of `s1` and first `j` characters of `s2`.

**Complexity:**

- Recursion: exponential
- Memoization: `O(N × M)` time, `O(N × M)` space
- Tabulation: `O(N × M)` time, `O(N × M)` space
- Space optimized: `O(N × M)` time, **`O(M)` space**.
