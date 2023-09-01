class Solution {
public:
    
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        return false;
    }
    
    bool isVowString(string s){
        if(isVowel(s[0]) && isVowel(s[s.length()-1]))
            return true;
        return false;
    }
    
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt=0;
        
        for(int i = left; i<= right; i++){
            if(isVowString(words[i]))
                cnt++;
        }
        return cnt;
    }
};