## Segment Tree

**Definition:**
A Segment Tree is a **binary tree that stores information (sum, min, max, etc.) about ranges/subarrays** of an array.

**When to use:**
When you need **many range queries + updates** on an array, especially when values can change.

**Why:**
It avoids recalculating an entire range after every update. Both **query and update** can be done efficiently.

**How it works:**
Split the array into halves recursively → each node stores its range's result → `update()` changes one value and updates its ancestors → `rangeQuery()` combines the required nodes.

**Complexity:** `O(n)` build, `O(log n)` update, `O(log n)` range query, **`O(n)` space**.
