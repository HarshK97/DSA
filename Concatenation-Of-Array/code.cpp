#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> getConcatenation(vector<int> &nums) {
    int n = nums.size();
    vector<int> ans(2 * n);

    for (int i = 0; i < n; i++) {
      ans[i] = nums[i];
      ans[i + n] = nums[i];
    }

    return ans;
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

    vector<int> result = sol.getConcatenation(nums);

    cout << "Concatenated Array: ";
    for (int num : result) {
      cout << num << " ";
    }
    cout << "\n";
  }
  return 0;
}
