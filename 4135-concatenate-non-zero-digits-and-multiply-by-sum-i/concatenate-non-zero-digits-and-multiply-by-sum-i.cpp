class Solution {
public:
    long long sumAndMultiply(int n) {
        long long reverse = 0;
        long long i=1;
        long long last_digit = 0;
        long long sum = 0;

        while(n!=0){
        last_digit = n%10;

        if(last_digit != 0){
            reverse = reverse*10+last_digit;
            }

        n = n/10;

        }

        long long x = 0;
         while(reverse!=0){
        last_digit = reverse%10;
        x = x*10+last_digit;
        sum = sum+last_digit;
        reverse = reverse/10;
        }
        return x*sum;
    }
};