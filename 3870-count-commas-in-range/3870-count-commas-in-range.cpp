class Solution {
public:
    int countCommas(int n) {
        long long count=0;

        for(int i=999;i<=n;i++){
            if(i>=1000){
                count++;
            }
        }
        return count;
    }
};