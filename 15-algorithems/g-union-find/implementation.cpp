#include<bits/stdc++.h>
using namespace std;

class UnionFind {
  public: 
    unordered_map<int, int> par;
    unordered_map<int, int> rank;

    UnionFind(int n){
      for(int i = 1; i <= n; i++){
        par[i] = i;
        rank[i] = 0;
      }
    }

    int find(int n){
      int p = par[n];
      while(p != par[p]){
        par[p] = par[par[p]];
        p = par[p];
      }
      return p;
    }

    bool union_copy(int n1, int n2){
      int p1 = find(n1), p2 = find(n2);
      if(p1 == p2) return false;

      if(rank[p1] > rank[p2]){
        par[p2] = p1;
      }
      else if(rank[p1] < rank[p2]){
        par[p1] = p2;
      } else{
        par[p1] = p2;
        rank[p2] += 1;
      }
      return true;
    }
};

int main() {
  return 0;
}