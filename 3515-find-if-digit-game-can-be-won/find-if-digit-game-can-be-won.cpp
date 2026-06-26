class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s_sum = 0;
        int d_sum = 0;
        for(int i=0; i<=nums.size()-1; i++){
            if(nums[i]>=0 && nums[i]<=9){
                s_sum += nums[i];
            }
            if(nums[i]>=10 && nums[i]<=99){
                d_sum += nums[i];
            }
        }
        if(s_sum > d_sum || d_sum > s_sum){
            return true;
        }
        else{
            return false;
        }
        return 0;
    }
};