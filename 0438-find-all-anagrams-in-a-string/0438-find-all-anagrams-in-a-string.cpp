class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if(s.length() < p.length())
            return ans;

        vector<int> pFreq(26, 0);
        vector<int> windowFreq(26, 0);

        for(char ch : p) {
            pFreq[ch - 'a']++;
        }

        int k = p.length();

        int left = 0;

        for(int right = 0; right < s.length(); right++) {

            windowFreq[s[right] - 'a']++;

            if(right - left + 1 > k) {
                windowFreq[s[left] - 'a']--;
                left++;
            }

            if(right - left + 1 == k) {

                if(windowFreq == pFreq) {
                    ans.push_back(left);
                }
            }
        }

        return ans;
    }
};