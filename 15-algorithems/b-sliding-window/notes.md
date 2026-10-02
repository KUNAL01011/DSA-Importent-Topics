## Fixed Sliding Window — Close Duplicates

**Definition:**
A fixed sliding window maintains a window of at most `k` elements while moving through the array.

**When to use:**
When the problem asks about elements within a **fixed distance/size `k`**.

**Why:**
Instead of checking every pair (`O(n²)`), we only track the elements inside the current window.

**How it works:**
Move `r` forward → remove `nums[l]` if window size exceeds `k` → check if `nums[r]` already exists → insert it into the window.

**Complexity:** `O(n)` average time, `O(k)` space.



===============================================




## Variable Sliding Window

**Definition:**
A variable sliding window is a window whose **size changes dynamically** to maintain a required condition.

**When to use:**
When the problem asks for the **longest/shortest subarray** satisfying some condition, such as `sum >= target`, `sum <= k`, or all elements being equal.

**Why:**
Instead of checking every possible subarray (`O(n²)`), we expand and shrink one window to find the answer efficiently.

**How it works:**
Move `r` forward to **expand** the window → when the condition is satisfied/violated, move `l` forward to **shrink** it → update the maximum/minimum length.

**Key pattern:**
`Expand → Check condition → Shrink → Update answer`

**Complexity:** `O(n)` time, usually `O(1)` or `O(k)` space.
