## Prefix Sum

**Definition:**
Prefix Sum stores the **cumulative sum** of elements up to each index, so range sums can be calculated quickly.

**When to use:**
When you need to perform **many subarray/range sum queries** on a mostly unchanged array.

**Why:**
Instead of calculating every range sum in `O(n)`, preprocessing lets us answer each query in **O(1)**.

**How it works:**
Build `prefix[i] = nums[0] + ... + nums[i]` → for range `[l, r]`, calculate
`prefix[r] - prefix[l-1]` (or `prefix[r]` if `l == 0`).

**Complexity:** `O(n)` preprocessing, `O(1)` per query, `O(n)` space.

> **Code correction:** `preLeft` should use `l - 1`, not `left - 1`. Also, the constructor loop should be `for(int n : nums)`, assuming `nums` is passed as a reference rather than a pointer.
