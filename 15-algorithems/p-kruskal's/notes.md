Kruskal’s Algorithm — Minimum Spanning Tree (MST)
Definition:
Kruskal’s algorithm builds an MST by repeatedly choosing the smallest-weight edge that does not create a cycle.
When to use:
When you have a weighted, undirected graph and need to connect all vertices with minimum total cost.
Why:
Sorting edges and using Union-Find (DSU) lets us quickly determine whether adding an edge would create a cycle.
How it works:
Sort all edges by weight → take the cheapest edge → use union() to check if its endpoints are already connected → if not, add the edge and merge their sets → repeat until n - 1 edges are selected.
Key idea:
Sort edges → Pick cheapest → Check cycle with DSU → Add → Repeat
Complexity: O(E log E) time, O(V + E) space.
Important difference
- Prim: Start from a vertex → repeatedly choose the cheapest edge leaving the visited set.
- Kruskal: Start from edges → sort all edges → repeatedly choose the cheapest edge that doesn't form a cycle.