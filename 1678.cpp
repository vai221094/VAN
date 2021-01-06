class Solution {
public:
    string interpret(string s) {
        string out;
        int l = s.size();
        int i = 0;
        for( i =0;i<l;i++) {
            if(s[i] == 'G') out += "G";
            else if(s[i]== '(') {
                if(s[i+1]=='a') {
                    out += "al";
                    i+=3;
                }
                else if(s[i+1]==')') {
                    out += "o";
                    i++;
                }
                    
            }
        }
        return out;
    }
};