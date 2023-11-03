class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;

        int tarind = 0;

        for(int i =1;i<=n; i++){
            if(tarind == target.size())
                break;
            
            if(target[tarind] == i){
                ans.push_back("Push");
                tarind++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }

        return ans;
    }
};