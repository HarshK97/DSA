#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> shuffle(vector<int> &nums, int n) {
    vector<int> ans(2 * n);
    for (int i = 0; i < n; i++) {
      ans[2 * i] = nums[i];
      ans[2 * i + 1] = nums[i + n];
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
    cout << "Enter value of n: ";
    cin >> n;

    vector<int> nums(2 * n);
    cout << "Enter " << 2 * n << " elements: ";
    for (int i = 0; i < 2 * n; i++) {
      cin >> nums[i];
    }

    vector<int> result = sol.shuffle(nums, n);

    cout << "Shuffled array: ";
    for (int num : result) {
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}

