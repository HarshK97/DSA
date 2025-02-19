#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  string restoreString(string s, vector<int> &indices) {
    string result(s.size(), ' ');
    for (int i = 0; i < s.size(); i++) {
      result[indices[i]] = s[i];
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
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int n = s.size();
    vector<int> indices(n);

    cout << "Enter " << n << " indices: ";
    for (int i = 0; i < n; i++) {
      cin >> indices[i];
    }

    cout << "Restored string: " << sol.restoreString(s, indices) << endl;
  }

  return 0;
}

