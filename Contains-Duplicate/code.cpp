#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    unordered_set<int> seen;
    for (int num : nums) {
      if (seen.count(num)) {
        return true;
      }
      seen.insert(num);
    }
    return false;
  }
};

int main() {
  int t;
  cout << "Enter number of test cases: ";
  cin >> t;

  Solution sol;

  while (t--) {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }

    bool result = sol.containsDuplicate(nums);
    if (result)
      cout << "Contains duplicate: YES" << endl;
    else
      cout << "Contains duplicate: NO" << endl;
  }

  return 0;
}

