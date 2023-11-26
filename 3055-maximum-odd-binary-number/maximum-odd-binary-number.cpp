class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int len = s.length();
        string ans ="";

        for(int it=0;it<len;it++)
            ans = ans + '0';

        //cout<<ans<<endl;

        int one = 0;

        for(int i=0;i<len;i++){
            if(s[i] == '1')
                one++;
        }

        //cout<<one<<endl;

        if(len >= 1){
            ans[len-1] = '1';
            one--;
        }
        cout<<ans<<endl;

        int i=0;

        while(one--){
            ans[i++] = '1';
        }

        //cout<<ans<<endl;

        return ans;
    }
};