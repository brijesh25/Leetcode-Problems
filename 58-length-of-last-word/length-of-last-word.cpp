class Solution {
public:
    int lengthOfLastWord(string s) {
         int l = s.length(),c=0,i;


        for(i = l-1;i>=0;i--){
            if(s[i] == ' ')
                continue;
            else
                break;
        }
        
        for(int j = i ;j>=0;j--){
            if(s[j]==' ')
                break;
            c++;
        }
        return c;
    }
};