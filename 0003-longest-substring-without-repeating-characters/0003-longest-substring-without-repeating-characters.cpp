class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int left=0;
        int maxlen=0;
        for(int right=0;right<s.length();right++){
         while(st.count(s[right])==1)
         {
            st.erase(s[left]);
            left++;
         }
         st.insert(s[right]);
         maxlen=max(maxlen,right-left+1);
         }
         return maxlen;
    }
};