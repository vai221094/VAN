class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int i = 0, j = 0, k = 0, x = 0;
        for(i = 0;i<arr.size() - 2;i++) {
            for(j = i+1;j<arr.size() - 1;j++) {
                for(k = j +1;k<arr.size();k++) {
                    if((abs(arr[i] - arr[j]) <=a) && (abs(arr[j] - arr[k]) <=b) && (abs(arr[i] - arr[k]) <=c))
                        x++;
                }
            }
        }
        return x;
    }
};