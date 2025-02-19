#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> numMap;

    for (int i = 0; i < nums.size(); i++) {
      int diff = target - nums[i];
      if (numMap.find(diff) != numMap.end()) {
        return {numMap[diff], i};
      }
      numMap[nums[i]] = i;
    }
    return {};
  }
};

int main() {
  int t;
  cout << "Enter number of test cases: ";
  cin >> t;

  Solution sol;

  while (t--) {
    int n, target;
    cout << "Enter size of array and target sum: ";
    cin >> n >> target;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }

    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty()) {
      cout << "Indices of elements: " << result[0] << " " << result[1] << endl;
    } else {
      cout << "No valid pair found." << endl;
    }
  }

  return 0;
}

