class Solution {
public:
    bool isSubsequence(string s, string t) {
        int tpos = 0;
        
        for(int i=0;s[i]!= '\0';i++){
            while(t[tpos] && t[tpos] != s[i]){
                tpos++;
            }
            if(t[tpos] == '\0')
                return false;
            tpos++;
        }
        return true;
    }
};