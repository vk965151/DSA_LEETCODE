class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int j = nums.size();
        for(int i=0; i<j; i++){
            if(nums[i]>=target){
                return i;
            }
        }
        return j;
    }
};