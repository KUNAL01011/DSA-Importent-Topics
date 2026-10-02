### Kadane’s Algorithm — Maximum Subarray Sum

* `currSum` stores the **best sum of a subarray ending at the current element**.
* If `currSum` becomes negative, discard it (`currSum = 0`) because a negative sum can only reduce the future subarray sum.
* Add the current element to `currSum` and update `maxSum` with the largest sum seen so far.
* **Time:** `O(n)` | **Space:** `O(1)`
