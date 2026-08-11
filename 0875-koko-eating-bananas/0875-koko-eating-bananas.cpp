class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        while (left < right) {
            int mid = left + (right - left) / 2;

            long long hours = 0;

            for (int p : piles) {
                hours += (p + mid - 1) / mid;  // ceiling division
            }

            if (hours <= h) {
                right = mid;   // try smaller speed
            } else {
                left = mid + 1; // need faster speed
            }
        }

        return left;
    }
};