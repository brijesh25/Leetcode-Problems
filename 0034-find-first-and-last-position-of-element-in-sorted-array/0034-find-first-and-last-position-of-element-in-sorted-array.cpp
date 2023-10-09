class Solution {
public:
    int firstOccurence(vector<int> &nums, int n, int target){
        int start=0,end=n-1,mid;
        int index = -1;

        while(start <= end){
            mid = start + (end - start)/2;

            if(nums[mid] == target){
                index=mid;
                end=mid-1;
            }
            else if(target > nums[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return index;
    }

    int lastOccurence(vector<int> &nums, int n, int target){
        int start=0,end=n-1,mid;
        int index = -1;

        while(start <= end){
            mid = start + (end - start)/2;

            if(nums[mid] == target){
                index=mid;
                start=mid+1;
            }
            else if(target > nums[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return index;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        return {firstOccurence(nums,n,target), lastOccurence(nums,n,target)};
    }
};