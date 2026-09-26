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

int dfs(string &node, string &target, unordered_map<string, vector<string>> &adjList,
        unordered_set<string> &visit)
{
  if (visit.count(node))
  {
    return 0;
  }
  if (node == target)
  {
    return 1;
  }
  int count = 0;
  visit.insert(node);
  for (string neighbor : adjList[node])
  {
    count += dfs(neighbor, target, adjList, visit);
  }
  visit.erase(node);
  return count;
}

int main()
{
  return 0;
}