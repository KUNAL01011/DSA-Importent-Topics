## Unbounded Knapsack — Dynamic Programming

**Definition:**  
Unbounded Knapsack finds the **maximum profit** within a capacity when **each item can be selected unlimited times**.

**When to use:**  
When an item can be **reused**, such as unlimited coins, products, or resources with weight/cost and value.

**Why:**  
Unlike 0/1 Knapsack, after choosing an item, **we can choose the same item again**, so the state stays at `i` instead of moving to `i + 1`.

**How it works:**  
For each `(i, capacity)`: **skip** item → `i + 1`, or **include** item → stay at `i` with reduced capacity → take the maximum.

**Key idea:**  
`Skip → i + 1` | `Include → i` (**can reuse item**)

**DP progression:**

- **Recursion:** Include/skip → `O(2ⁿ)` or worse due to repeated reuse.
- **Memoization:** Cache `(i, capacity)` → `O(n × capacity)`.
- **Tabulation:** `include = profit[i] + dp[i][c - weight[i]]` → `O(n × capacity)`.
- **Space optimized:** Keep only necessary rows → `O(capacity)` space.

**Complexity:** `O(n × capacity)` time, `O(capacity)` optimized space.

### ⭐ Most important difference

| 0/1 Knapsack        | Unbounded Knapsack            |
| ------------------- | ----------------------------- |
| Item used **once**  | Item used **unlimited times** |
| Include → `i + 1`   | Include → **`i`**             |
| `dp[i-1][c-weight]` | **`dp[i][c-weight]`**         |

**Memory trick:**

> **0/1 → move to previous item.**  
> **Unbounded → stay on the same item.**
