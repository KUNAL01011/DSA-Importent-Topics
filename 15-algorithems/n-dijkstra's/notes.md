## Dijkstra's Algorithm — Shortest Path

**Definition:**  
Dijkstra's algorithm finds the **shortest distance from a source node to every other node** in a weighted graph with **non-negative edge weights**.

**When to use:**  
When the graph has **weighted edges**, all weights are **`>= 0`**, and you need shortest paths from one source.

**Why:**  
It always processes the **currently closest unvisited node**, so once a node is finalized, its shortest distance is known.

**How it works:**  
Put `(distance, node)` into a **min-heap** → take the node with the smallest distance → finalize it → push its neighbors with `current distance + edge weight` → repeat.

**Key idea:**  
`Min distance → Process node → Relax neighbors → Repeat`

**Complexity:** `O((V + E) log V)` time, `O(V + E)` space.

**Important:** ❌ Dijkstra does **not** work correctly with negative edge weights.