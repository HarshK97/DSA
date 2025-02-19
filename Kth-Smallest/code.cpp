#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Solution {
public:
  int kthSmallest(vector<int> &arr, int k) {
    priority_queue<int> maxHeap;

    for (int num : arr) {
      maxHeap.push(num);
      if (maxHeap.size() > k) {
        maxHeap.pop();
      }
    }

    return maxHeap.top();
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
    vector<int> arr(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    cout << "Kth smallest element: " << sol.kthSmallest(arr, k) << endl;
  }

  return 0;
}

