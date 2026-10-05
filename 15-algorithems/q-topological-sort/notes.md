## Topological Sort — DFS

**Definition:**  
Topological Sort is a linear ordering of the vertices of a **Directed Acyclic Graph (DAG)** such that for every edge `u → v`, **`u` comes before `v`**.

**When to use:**  
When problems involve **dependencies or prerequisites**, such as course scheduling, task ordering, or build systems.

**Why:**  
It gives an order in which all dependencies are satisfied before processing a dependent node.

**How it works:**  
Run DFS → visit all neighbors first → after finishing a node, **push it into `topSort`** → finally **reverse** the result.

**Key idea:**  
`DFS → Process after children → Push → Reverse`

**Complexity:** `O(V + E)` time, `O(V + E)` space.

**Important:**  
Topological sorting is possible **only for a DAG**. If the graph contains a cycle, a valid topological ordering does not exist.
