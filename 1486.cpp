class Solution {
public:
    int xorOperation(int n, int start) {
        int xo = start;
        int i = 0, x = 0;
        for(i=1;i<n;i++) {
            x = start + 2*i;
            xo = xo ^ x;
        }
        return xo;
    }
};