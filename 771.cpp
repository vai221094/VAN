class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int i = 0, k = 0;
        int c = 0;
        int a[26] = {0};
        //2 for upper, 1 for lower, 3 if both
        for(i = 0; i<j.size();i++) {
            if(isupper(j[i])) {
                int t = j[i] - 65;
                if(a[t] == 0) {
                    a[t] = 2;
                } else if(a[t] == 1) {
                    a[t] = 3;
                }
            }
            else {
                int t = j[i] - 97;
                if(a[t] == 0) {
                    a[t] = 1;
                } else if(a[t] == 2) {
                    a[t] = 3;
                }
            }
        }
        for(i=0;i<s.size();i++) {
            if(isupper(s[i])) {
                if(a[s[i]-65] == 2 || a[s[i]-65] == 3) c++;
            } else {
                if(a[s[i]-97] == 1 || a[s[i]-97] == 3) c++;
            }
        }
        return c;
    }
};