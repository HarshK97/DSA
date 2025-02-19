#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
  int findKthLargest(vector<int> &nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int num : nums) {
      minHeap.push(num);
      if (minHeap.size() > k) {
        minHeap.pop();
      }
    }
    return minHeap.top();
  }
};

int main() {
  int t;
  cout << "Enter number of test cases: ";
  cin >> t;

  Solution sol;

  while (t--) {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter " << n << "elements: ";
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    int result = sol.findKthLargest(nums, k);
    cout << "The " << k << "th largest element is: " << result << "\n";
  }
  return 0;
}
