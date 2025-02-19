#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> remainderCount;
        remainderCount[0] = 1;

        int sum = 0, count = 0;

        for (int num : nums) {
            sum += num;
            int remainder = sum % k;

            if (remainder < 0) {
                remainder += k;
            }

            if (remainderCount.find(remainder) != remainderCount.end()) {
                count += remainderCount[remainder];
            }

            remainderCount[remainder]++;
        }
        return count;
    }
};

int main() {
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;

    Solution sol;

    while (t--) {
        int n, k;
        cout << "Enter size of array and value of k: ";
        cin >> n >> k;

        vector<int> nums(n);
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        cout << "Number of subarrays divisible by " << k << ": " << sol.subarraysDivByK(nums, k) << endl;
    }

    return 0;
}

