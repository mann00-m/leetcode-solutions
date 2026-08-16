class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size()-1;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
                return i;
            
        }
        return -1;
    }
};