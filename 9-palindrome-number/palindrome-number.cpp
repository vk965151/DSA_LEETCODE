class Solution {
public:
    bool isPalindrome(int x) {
        int p_num = x;
        double reverse = 0;
        int lastdigit = 0;
        if(x<0){
            return false;
        }
        while(x != 0){
            lastdigit = x%10;
            reverse = reverse*10+lastdigit; 
            x = x/10;
        }
        if(p_num == reverse){
            return true;
        }
        else{
            return false;
        }
        return true;
    }
};