class Solution {
public:
    int maxDepth(string s) {
        int a = 0;
        int max = 0;
        for(int i = 0; i<s.size();i++)
        {
            if(s[i] == '(') {
                a++;
            }
            else if(s[i] ==')') {
                if(a > max) max = a;
                a--;
            }
        }
        return max;
    }
};