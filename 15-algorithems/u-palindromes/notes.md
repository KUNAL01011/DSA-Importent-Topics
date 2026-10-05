## Longest Palindromic Substring — Expand Around Center

**Definition:**  
Find the **longest contiguous substring** of a string that reads the same forward and backward.

**When to use:**  
When the question asks for a **longest palindrome substring** and you want a simple `O(n²)` solution without DP.

**Why:**  
Every palindrome has a **center**. We can start from the center and expand left/right while characters are equal.

**How it works:**  
For every index, check **two centers**: `i,i` for odd-length and `i,i+1` for even-length → expand while `s[l] == s[r]`.

**Key idea:**  
`Odd → center = one character` | `Even → center = gap between two characters`

**Complexity:**

- Time: **`O(n²)`** — up to `n` centers, each can expand `O(n)`.
- Space: **`O(1)`**.

**Memory trick:**

> **Palindrome → Find center → Expand outward.**
