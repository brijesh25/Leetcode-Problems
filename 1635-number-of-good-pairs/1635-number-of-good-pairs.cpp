class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int len=nums.size(),cnt=0;
        
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                if(nums[i] == nums[j])
                    cnt++;
            }
        }
        return cnt;
    }
};