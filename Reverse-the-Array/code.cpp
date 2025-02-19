#include <iostream>
#include <vector>
using namespace std;

// function to reverse an array
void reverseArray(vector<int> &arr) {
  int n = arr.size();

  // Temporary array to store elements in reversed order
  vector<int> temp(n);

  // Copy elements from original array to temp in reverse order
  for (int i = 0; i < n; i++)
    temp[i] = arr[n - i - 1];

  // Copy elements back to original array
  for (int i = 0; i < n; i++)
    arr[i] = temp[i];
}

int main() {
  int n;
  cout << "Enter the size of array: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter " << n << " elements: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  reverseArray(arr);

  cout << "Reversed array: ";
  for (int num : arr) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
