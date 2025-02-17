class Solution {
public:
    string firstPalindrome(vector<string>& words) {
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

