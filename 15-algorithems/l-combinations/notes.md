## Backtracking — Combinations

**Definition:**  
A combination selects **`k` elements from `1...n` where order does not matter**. For example, `[1,2]` and `[2,1]` are the same combination.

**When to use:**  
When the problem asks for **all ways to choose exactly `k` elements from `n` elements**, without caring about order.

Draw 1 of 2Available1235Group4

\\(\binom{5}{2}=\frac{5!}{2!(5-2)!}=10\\)

After all 2 draws finish, their numerical order shows one combination; changing draw order does not create a new one.

Options

Draws

Give feedback

**Why:**  
We need to explore different choices, but once we choose `i`, we only consider **larger elements** afterward. This prevents duplicate combinations.

**How it works — V1:**  
At each number, make two decisions: **include `i` → recurse → backtrack → exclude `i` → recurse**.

**How it works — V2:**  
Use a `for` loop to try every possible next element → choose it → recurse from `j + 1` → backtrack. This is usually the **cleaner combination pattern**.

**Key idea:**  
`Choose → Explore → Undo` + always move forward (`j + 1`).

**Complexity:** `O(C(n,k) × k)` time to generate the output, with `O(k)` recursion/current-path space *(excluding output)*.