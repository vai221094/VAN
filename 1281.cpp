class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> a;
        int x = n;
        int sum = 0, prod = 1;
        while(x>0) {
            a.push_back(x%10);
            x = x/10;
        }
        for(int i=0;i<a.size();i++)
        {
            sum += a[i];
            prod *= a[i];
        }
        return prod - sum;
    }
};