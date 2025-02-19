#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int insertPos = 0;

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != 0) {
        nums[insertPos++] = nums[i];
      }
    }

    while (insertPos < nums.size()) {
      nums[insertPos++] = 0;
    }
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

    sol.moveZeroes(nums);

    cout << "Array after moving zeroes: ";
    for (int num : nums) {
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}

