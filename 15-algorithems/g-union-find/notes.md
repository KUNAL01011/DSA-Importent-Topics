## Union-Find (Disjoint Set Union)

**Definition:**
Union-Find is a data structure used to **track and manage groups/connected components** of elements.

**When to use:**
When you need to repeatedly **check whether two elements are connected** or **merge two groups**, especially in graph problems.

**Why:**
It performs `find` and `union` operations very efficiently without rebuilding the groups each time.

**How it works:**
Each element has a **parent** → `find()` finds the group representative/root → `union()` merges two different groups using **rank**. Path compression makes future `find()` operations faster.

**Complexity:** Almost `O(1)` amortized per operation — more precisely **`O(α(n))`**, where `α` is the inverse Ackermann function. **Space:** `O(n)`.
