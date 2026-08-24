class Solution {
public:
    bool isPalindrome(string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        string longest = "";

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                
                if (isPalindrome(s, i, j)) {
                    int len = j - i + 1;
                    if (len > longest.size()) {
                        longest = s.substr(i, len);
                    }
                }

            }
        }

        return longest;
    }
};