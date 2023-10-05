class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int x = floor(n/3);
        
        map<int, int> mp;

        for(auto it : nums){
            mp[it]++;
        }

        for(auto it : mp){
            if(it.second > x)
                ans.push_back(it.first);
        }
        return ans;
    }
};