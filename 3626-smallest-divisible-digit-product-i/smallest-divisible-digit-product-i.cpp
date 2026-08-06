class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
        int temp = n;
        int mul = 1;
        while(temp>0){
           int rem = temp%10;
            mul = mul*rem;
            temp = temp/10;
        }
            if(mul%t==0){
                return n;
            }

                n++;
        }
        return -1;
    }
};