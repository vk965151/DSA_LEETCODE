class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0; i<words.size(); i++){
            string current = words[i];
            int j = 0;
            int k = current.size()-1;
            bool isPalin = true;
            while(j<k){
               if(current[j] != current[k]){
                isPalin = false;
                break;
               }
               j++;
               k--;
            }
            if(isPalin){
                return current;
            }
        }
        return "";

    }
};