#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
  int findDuplicate(vector<int> &nums) {
    unordered_set<int> seen;
    for (int num : nums) {
      if (seen.count(num)) {
        return num;
      }
      seen.insert(num);
    }
    return -1;
  }
};

int main() {
  int t;
  cout << "Enter number of test cases: ";
  cin >> t;

  Solution sol;

  while (t--) {
    int n;
    cout << "Enter size of array (n+1 elements): ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }

    cout << "Duplicate number: " << sol.findDuplicate(nums) << endl;
  }

  return 0;
}

