class Solution {
public:
    string toLowerCase(string s) {
        int i = 0;
        for(i=0;i<s.size();i++)
        {
            if(isupper(s[i])) {
                s[i] = 97 + s[i] - 65;
            }
        }
        return s;
    }
};