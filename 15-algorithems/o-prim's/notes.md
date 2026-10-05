## Prim’s Algorithm — Minimum Spanning Tree (MST)

**Definition:**  
Prim’s algorithm finds a **Minimum Spanning Tree** of a connected, weighted, undirected graph — connecting all nodes with the **minimum total edge weight** and no cycles.

**When to use:**  
When you need to connect **all vertices as cheaply as possible**, such as network/cable/road connection problems.

**Why:**  
Instead of considering all possible edges, Prim’s greedily chooses the **cheapest edge that connects a visited node to an unvisited node**.

**How it works:**  
Start from any node → put its edges into a **min-heap** → take the cheapest edge → if it reaches an unvisited node, add it to MST → add that node's edges → repeat until all nodes are visited.

**Key idea:**  
`Visited → Cheapest outgoing edge → Add new node → Repeat`

**Complexity:** `O(E log E)` time with a min-heap, `O(V + E)` space.

**Important:**  
Prim's works for **weighted, undirected graphs** and produces exactly **`V - 1` edges** for a connected graph.
