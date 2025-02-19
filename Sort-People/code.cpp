#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<string> sortPeople(vector<string> &names, vector<int> &heights) {
    vector<pair<int, string>> people;
    for (int i = 0; i < names.size(); i++) {
      people.push_back({heights[i], names[i]});
    }
    sort(people.rbegin(), people.rend());
    vector<string> result;
    for (auto &p : people) {
      result.push_back(p.second);
    }
    return result;
  }
};

int main() {
  int t;
  cout << "Enter number of test cases: ";
  cin >> t;

  Solution sol;

  while (t--) {
    int n;
    cout << "Enter number of people: ";
    cin >> n;

    vector<string> names(n);
    vector<int> heights(n);

    cout << "Enter names: ";
    for (int i = 0; i < n; i++) {
      cin >> names[i];
    }

    cout << "Enter corresponding heights: ";
    for (int i = 0; i < n; i++) {
      cin >> heights[i];
    }

    vector<string> result = sol.sortPeople(names, heights);

    cout << "Sorted names by height: ";
    for (const string &name : result) {
      cout << name << " ";
    }
    cout << endl;
  }

  return 0;
}

