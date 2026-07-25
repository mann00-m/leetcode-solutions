class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i = 0;
        int j = 1;

        vector<int> temp;

        temp.push_back(nums[0]);   // Pehla element add karo

        while (j < nums.size()) {

            if (nums[i] < nums[j]) {
                temp.push_back(nums[j]);
                i = j;
            }

            j++;
        }

        for (int k = 0; k < temp.size(); k++) {
            nums[k] = temp[k];
        }

        return temp.size();
    }
};