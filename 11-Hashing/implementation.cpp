#include <bits/stdc++.h>
using namespace std;

class HashMap
{
public:
  int size = 0;
  int cap = 2;
  vector<pair<string, string> *> map;

  HashMap()
  {
    this->map = *(new vector<pair<string, string> *>{0, 0});
  }

  int hash(string &key)
  {
    int index = 0;
    for (char &c : key)
    {
      index += int(c);
    }
    return index % cap;
  }

  string *get(string &key)
  {
    int index = hash(key);
    while (map[index])
    {
      if (map[index]->first == key)
      {
        return &map[index]->second;
      }
      index++;
      index = index % cap;
    }
    return nullptr;
  }

  void put(string &key, string &val)
  {
    int index = hash(key);
    while (true)
    {
      if (map[index] == 0)
      {
        map[index] = new pair<string, string>(key, val);
        size++;
        if (size >= cap / 2)
        {
          rehash();
        }
        return;
      }
      else if (map[index]->first == key)
      {
        map[index]->second = val;
        return;
      }
      index++;
      index = index % cap;
    }
  }

  void remove(string &key)
  {
    if (!get(key))
    {
      return;
    }
    int index = hash(key);
    while (true)
    {
      if (map[index]->first == key)
      {
        map[index] = 0;
        size--;
        return;
      }
      index++;
      index = index % cap;
    }
  }

  void rehash()
  {
    cap = 2 * cap;
    vector<pair<string, string> *> newMap = *(new vector<pair<string, string> *>());
    for (int i = 0; i < cap; i++)
    {
      newMap.push_back(0);
    }
    vector<pair<string, string> *> oldMap = map;
    map = newMap;
    size = 0;
    for (auto &pair : oldMap)
    {
      if (pair != 0)
      {
        put(pair->first, pair->second);
      }
    }
  }

  void print()
  {
    cout << "Printing size =" << size << endl;
    for (auto &pair : map)
    {
      if (pair)
      {
        cout << pair->first << " " << pair->second << "-";
      }
      cout << endl;
    }
  }
};

int main()
{
  return 0;
}