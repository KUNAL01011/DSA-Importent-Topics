## Backtracking / Recursion — Permutations

**Definition:**  
A permutation is an arrangement of elements where **order matters**. For example, `[1,2,3]` and `[2,1,3]` are different permutations.

**When to use:**  
When a problem asks for **all possible arrangements/orders** of a set of elements.

Draw 2 of 3Available13Arrangement24

\\({}^{4}P_3=\frac{4!}{(4-3)!}=24\\)

This run constructs the arrangement 2, 4, and 3. Drawing the same tokens in another order gives a different permutation.

Options

Draws

Give feedback

**Why:**  
Every element can be placed in **different positions**, so we need to explore every possible ordering.

**How it works:**  
Start with an empty permutation → take the next number → **insert it at every possible position** → repeat until all numbers are used.

**V1:** Recursively generate permutations of the remaining elements, then insert the current element at every position.

**V2:** Iteratively start with `{}` and insert each new number at every possible position in every existing permutation.

**Key idea:**  
`Take element → Insert at every position → Repeat`

**Complexity:** `O(n × n!)` time to generate/copy all permutations, **O(n × n!)** space for the output.