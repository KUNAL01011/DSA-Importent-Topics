#include<bits/stdc++.h>
using namespace std;

class Median {
  public: 
    priority_queue<int> small;
    priority_queue<int, vector<int>, greater<int>> large;

    Median() {}

    void insert(int num){
      small.push(num);
      if(!small.empty() && !large.empty() && small.top() > large.top()){
        large.push(small.top());
        small.pop();
      }

      if(small.size() > large.size() + 1) {
        large.push(small.top());
        small.pop();
      }
      if(large.size() > small.size() + 1){
        small.push(large.top());
        large.pop();
      }
    }

    double getMedian(){
      if(small.size() > large.size()){
        return (double) small.top();
      } else if(large.size() > small.size()){
        return (double) large.top();
      }
      return (double)(small.top() + large.top()) / 2.0;
    }
};

int main() {
  return 0;
}