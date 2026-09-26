#include <bits/stdc++.h>
using namespace std;

class GraphNode
{
public:
  string &val_;
  vector<string> neighbors_;

  GraphNode(string &val) : val_(val) {}
};

unordered_map<string, vector<string>> buildAdjList()
{
  vector<vector<string>> edges =
      {{"A", "B"}, {"B", "C"}, {"B", "E"}, {"C", "E"}, {"E", "D"}};
  unordered_map<string, vector<string>> adjList;

  for (vector<string> edge : edges)
  {
    string src = edge[0], dst = edge[1];
    adjList[src].push_back(dst);
  }
  return adjList;
}

int main()
{
  return 0;
}