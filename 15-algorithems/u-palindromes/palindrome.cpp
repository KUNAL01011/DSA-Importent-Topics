#include<bits/stdc++.h>
using namespace std;

// v1
int longest(string& s) {
    int length = 0;
    
    for (int i = 0; i < s.size(); i++) {
        // odd length
        int l = i, r = i;
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            if ((r - l + 1) > length) {
                length = r - l + 1;
            }
            l--;
            r++;
        }
        // even length
        l = i, r = i + 1;
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            if ((r - l + 1) > length) {
                length = r - l + 1;
            }
            l--;
            r++;
        }
    }
    return length;
}

// v2
int helper(string& s, int l, int r) {
    int maxLength = 0;
    while (l >= 0 && r < s.size() && s[l] == s[r]) {
        if ((r - l + 1) > maxLength) {
            maxLength = r - l + 1;
        }
        l--;
        r++;
    }
    return maxLength;
}

int longest(string& s) {
    int length = 0;
    for (int i = 0; i < s.size(); i++) {
        // odd length
        length = max(length, helper(s, i, i));

        // even length
        length = max(length, helper(s, i, i + 1));
    }
    return length;
}


int main() {
  return 0;
}