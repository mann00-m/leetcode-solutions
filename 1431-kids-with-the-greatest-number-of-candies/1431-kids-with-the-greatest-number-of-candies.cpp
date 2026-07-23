class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int n = candies.size();
        vector<bool> ans;

        for (int i = 0; i < n; i++) {

            bool greatest = true;

            for (int j = 0; j < n; j++) {

                if (candies[i] + extraCandies < candies[j]) {
                    greatest = false;
                    break;
                }
            }

            ans.push_back(greatest);
        }

        return ans;
    }
};