#include<bits/stdc++.h>
using namespace std;

// 1. Recursion 
int fibbo(int n) {
    if (n <= 1) {
        return n;
    }
    return fibbo(n - 1) + fibbo(n - 2);
}

// Memoization + top down
int memoization(int n, unordered_map<int, int> *cache) {
    if (n <= 1) {
        return n;
    }
    if (cache->count(n)) {
        return (*cache)[n];
    }
    return memoization(n - 1, cache) + memoization(n - 2, cache);
}

// Tabulation / bottom up + space optimized version
int dp(int n) {
    if (n < 2) {
        return n;
    }

    int dp[] = {0, 1};
    int i = 2;
    while (i <= n) {
        int tmp = dp[1];
        dp[1] = dp[0] + dp[1];
        dp[0] = tmp;
        i++;
    }
    return dp[1];
}


int main() {
  return 0;
}