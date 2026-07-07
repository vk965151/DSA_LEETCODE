class Solution {
public:
    int numberOfSteps(int num) {
        int i = 1;
        int result = 0;
        while(num!=0){
            if(num%2==0){
                num = num/2;
                result++;
                i++;

            }
            if(num%2!=0){
                num = num-1;
                result++;
                i++ ;
            }

        }
         return result;
    }
};