## Two Heaps — Running Median

**Definition:**
Use **two heaps** to maintain the lower and upper halves of a set of numbers: a **max-heap (`small`)** for the smaller half and a **min-heap (`large`)** for the larger half.

**When to use:**
When you need to repeatedly **insert numbers and find the median** efficiently.

**Why:**
Sorting after every insertion would cost `O(n log n)` each time; two heaps keep the data organized without fully sorting it.

**How it works:**
Insert into `small` → move elements between heaps to maintain **ordering and balanced sizes** → median is the top of the larger heap, or the average of both tops when sizes are equal.

**Key idea:**
`small.top() <= large.top()` and `|small.size() - large.size()| <= 1`.

**Complexity:** `O(log n)` per insertion, `O(1)` per median query, `O(n)` space.
