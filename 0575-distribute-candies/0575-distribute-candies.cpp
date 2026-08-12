class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        int n = candyType.size();

        set<int> s;

        for (int i = 0; i < n; i++) {
            s.insert(candyType[i]);
        }

        return min((int)s.size(), n / 2);
    }
};