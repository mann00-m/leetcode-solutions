class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> st;
        st.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i-1]) {
                st.push_back(nums[i]);
            }}
        for(int i = 0; i < st.size(); i++) {
            nums[i] = st[i];
        }
        return st.size();
    }
};