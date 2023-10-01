class Solution {
public:
    string reverseWords(string s) {
        int sp = 0;
        for(int i = 0; i <= s.length(); ++i){
            if(i == s.length() || s[i] == ' '){
                reverse(&s[sp], &s[i]);
                sp = i + 1;
            }
        }
        
        return s;
    }
};