## Fast & Slow Pointers — Linked List

**Definition:**
Use two pointers moving at different speeds: **`slow` moves 1 step** and **`fast` moves 2 steps**.

**When to use:**
For linked-list problems involving the **middle, cycle detection, or cycle starting point**.

**Why:**
The different speeds let us find the middle in one pass and detect whether `fast` eventually meets `slow` inside a cycle.

**How it works:**

- **Middle:** when `fast` reaches the end, `slow` is at the middle.
- **Cycle:** if `slow == fast`, a cycle exists.
- **Cycle start:** after they meet, put another pointer at `head`; move both one step at a time. Their meeting point is the cycle start.

**Complexity:** `O(n)` time, `O(1)` extra space.
