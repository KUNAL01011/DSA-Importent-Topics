## Two Pointers

**Definition:**
Two Pointers uses **two indices (`l` and `r`)** to traverse an array/string, usually from opposite ends or the same direction.

**When to use:**
When the problem involves **pairs, comparing both ends, sorted arrays, or finding a target sum**.

**Why:**
It avoids checking every pair with nested loops (`O(n²)`) by intelligently moving one pointer based on the current condition.

**How it works:**
Start `l` and `r` → compare/check the current elements → move `l` or `r` based on the condition → continue until `l >= r`.

**Common patterns:**

* **Palindrome:** `l++`, `r--`
* **Sorted Two Sum:** if sum is too small → `l++`; if too large → `r--`

**Complexity:** `O(n)` time, `O(1)` extra space.
