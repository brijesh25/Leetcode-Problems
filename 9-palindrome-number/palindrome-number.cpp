class Solution {
public:
    bool isPalindrome(int x) {
        int s=0,c=0;
        int l=x;
        
        if(x<0 || (x%10==0 && x!=0))
            return false;
        
        while(x>c){
            s=x%10;
            c=c*10+s;
            x=x/10;
            
        }
        
        if(c==x || x==c/10)
            return true;
        else
            return false;
    }
};