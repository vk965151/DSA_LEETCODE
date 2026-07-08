class Solution {
public:
    int findNumbers(vector<int>& nums) {
       int even_count = 0;
        for(int i=0; i<nums.size(); i++){
                int currentNum = nums[i];
                int digitCount = 0;

                while(currentNum>0){
                    digitCount++;
                    currentNum/=10;
                }
                if(digitCount%2==0){
                    even_count++;
                }
            }
            return even_count;
        }
};