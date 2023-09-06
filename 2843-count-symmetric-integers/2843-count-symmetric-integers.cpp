class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        
        for(int i = low; i<= high; i++){
            string str = to_string(i);
            if(str.length()%2 != 0)
                continue;
            
            int k = str.length()/2;
            int n = str.length();
            
            int s1=0,s2=0;
            
            for(int j=0;j<k;j++){
                s1 += (str[j] - '0');
            }
            
            for(int j=k;j<n;j++){
                s2 += (str[j] - '0');
            }
            
            if(s1 == s2)
                cnt++;
        }
        return cnt;
    }
};