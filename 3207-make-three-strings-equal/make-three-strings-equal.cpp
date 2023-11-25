class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int l1 = s1.length();
        l1 = min(l1, (int)s2.length());
        l1 = min(l1, (int)s3.length());

        int sum = s1.length()+s2.length()+s3.length();

        if(s1[0] != s2[0] or s2[0] != s3[0] or s1[0] != s3[0])
            return -1;
        
        for(int i=0;i<l1;i++){
            if(s1[i] == s2[i] && s2[i] == s3[i]){
                sum -= 3;
            }
            else
                break;
        }

        return sum;
    }
};