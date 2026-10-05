## 0/1 Knapsack — Dynamic Programming

**Definition:**  
0/1 Knapsack finds the **maximum profit** that can fit within a given capacity, where each item can be chosen **at most once**.

**When to use:**  
When each item has a **weight + value/profit**, there is a capacity limit, and the choice is **take it or leave it**.

**Why:**  
Each item creates two choices: **include** or **skip**. Many choices repeat the same `(item, capacity)` state, so DP avoids recalculating them.

**How it works:**  
For each item, calculate `max(skip, include)` → `include = profit[i] + best remaining capacity` → store the result for reuse.

**Key idea:**  
`State = (i, capacity)` → `Skip OR Include → Take maximum`

**DP progression:**

- **Recursion:** Explore every include/skip choice → `O(2ⁿ)`
- **Memoization:** Cache `(i, capacity)` → `O(n × capacity)`
- **Tabulation:** Build the DP table bottom-up → `O(n × capacity)`
- **Space optimized:** Keep only the previous/current row → `O(capacity)` space

**Complexity:**  
Time: **`O(n × capacity)`** with DP  
Space: **`O(n × capacity)`** tabulation/memoization → **`O(capacity)`** optimized.
