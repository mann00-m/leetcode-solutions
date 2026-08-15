class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int alreadySatisfied = 0;
        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0) {
                alreadySatisfied += customers[i];
            }
        }

        int window = 0;
        int maxExtra = 0;
        for (int i = 0; i < n; i++) {

            if (grumpy[i] == 1) {
                window += customers[i];
            }

            if (i >= minutes) {
                if (grumpy[i - minutes] == 1) {
                    window -= customers[i - minutes];
                }
            }

            maxExtra = max(maxExtra, window);
        }

        return alreadySatisfied + maxExtra;
    }
};