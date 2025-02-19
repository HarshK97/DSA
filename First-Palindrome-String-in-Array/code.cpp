#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  string firstPalindrome(vector<string> &words) {
    for (int i = 0; i < words.size(); i++) {
      string word = words[i];
      int left = 0, right = word.size() - 1;
      bool isPalindrome = true;
      while (left < right) {
        if (word[left] != word[right]) {
          isPalindrome = false;
          break;
        }
        left++;
        right--;
      }
      if (isPalindrome) {
        return word;
      }
    }
    return "";
  }
};

int main() {
  int t;
  cout << "Enter number of test cases: ";
  cin >> t;

  Solution sol;

  while (t--) {
    int n;
    cout << "Enter number of words: ";
    cin >> n;
    vector<string> words(n);

    cout << "Enter " << n << " words: ";
    for (int i = 0; i < n; i++) {
      cin >> words[i];
    }

    string result = sol.firstPalindrome(words);
    if (result.empty())
      cout << "No palindrome found" << endl;
    else
      cout << "First palindrome: " << result << endl;
  }

  return 0;
}

