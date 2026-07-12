class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;
        for(int i=0; i<nums.size(); i++){
            elementSum += nums[i];

            int temp = nums[i];
            while(temp>0){
                int last = temp%10;
                digitSum += last;
                temp/=10;
            }
            
        }
        int ans = elementSum - digitSum;

        return ans;
        
    }
};