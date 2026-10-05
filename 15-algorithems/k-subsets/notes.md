## Backtracking — Subsets

**Definition:**  
Backtracking explores **all possible choices** by making a decision, exploring it, and then **undoing the decision** to try another possibility.

**When to use:**  
When a problem asks for **all combinations, subsets, permutations, or possible choices**.

**Why:**  
Each element has two choices — **include or exclude** — so recursion naturally explores every possible subset.

**How it works:**  
At each index → **include** `nums[i]` → recurse → **remove it (backtrack)** → **exclude** it → recurse → at the end, save the current subset.

**Key idea:**  
`Choose → Explore → Undo → Explore next choice`

**Complexity:** `O(n × 2ⁿ)` time, `O(n)` recursion space _(excluding the output)_.

## Backtracking — Subsequences with Duplicates

**Definition:**  
Generate all possible subsequences while ensuring **duplicate subsequences are not generated** when the input contains duplicate values.

**When to use:**  
When you need **all unique subsets/subsequences** from an array that may contain duplicate elements.

**Why:**  
Normal include/exclude recursion can produce the same result multiple times. Sorting groups duplicates together, allowing us to skip duplicate values in the **exclude branch**.

**How it works:**  
`Sort` the array → **include** current element → backtrack → in the **exclude** branch, skip all consecutive duplicates → continue recursion.

**Key idea:**  
`Sort → Include → Backtrack → Skip duplicates → Exclude`

**Complexity:** Up to `O(n × 2ⁿ)` time, `O(n)` recursion space _(excluding output)_.

> **Important:** This pattern is commonly called **Subsets II** in DSA problems. Mathematically, the generated results are subsets because we're treating the array elements as a collection; the **order remains unchanged** in the generated vectors.
