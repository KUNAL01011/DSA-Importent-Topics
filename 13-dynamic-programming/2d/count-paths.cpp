#include<bits/stdc++.h>
using namespace std;

// Q : Count the number of unique paths from the top left to the bottom right. YOu are only allowed to move down or to the right;

// Recursion
int bruteForce(int r, int c, int rows, int cols) {
    if (r == rows or c == cols) {
        return 0;
    }
    if (r == rows - 1 or c == cols - 1) {
        return 1;
    }
    return bruteForce(r + 1, c, rows, cols) +
        bruteForce(r, c + 1, rows, cols);
}

// Memoization - Time and Space: O(n * m)
int memoization(int r, int c, int rows, int cols, vector<vector<int>>& cache) {
    if (r == rows or c == cols) {
        return 0;
    }
    if (cache[r][c] > 0) {
        return cache[r][c];
    }
    if (r == rows - 1 or c == cols - 1) {
        return 1;
    }
    cache[r][c] = memoization(r + 1, c, rows, cols, cache) +  
        memoization(r, c + 1, rows, cols, cache);
    return cache[r][c];
}

// Tabulation/bottom up + space optimized - Time: O(n * m), Space: O(m), where m is num of cols
int dp(int rows, int cols) {
    int *prevRow = new int[cols]();

    for (int r = rows - 1; r >= 0; r--) {
        int* curRow = new int[cols]();
        curRow[cols - 1] = 1;
        for (int c = cols - 2; c >= 0; c--) {
            curRow[c] = curRow[c + 1] + prevRow[c];
        }
        prevRow = curRow;
    }
    return prevRow[0];
}


int main() {
  return 0;
}