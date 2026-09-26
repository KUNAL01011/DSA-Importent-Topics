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

int bfs(string &node, string &target, unordered_map<string, vector<string>> &adjList)
{
  int length = 0;
  unordered_set<string> visit;
  queue<string> queue;
  visit.insert(node);
  queue.push(node);

  while (queue.size())
  {
    int queueLength = queue.size();
    for (int i = 0; i < queueLength; i++)
    {
      string curr = queue.front();
      queue.pop();
      if (curr == target)
      {
        return length;
      }
      for (string neighbor : adjList[curr])
      {
        if (visit.count(neighbor) == 0)
        {
          visit.insert(neighbor);
          queue.push(neighbor);
        }
      }
    }
    length++;
  }
  return length;
}

int main()
{
  return 0;
}