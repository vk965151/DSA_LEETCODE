class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        for(int i=0; i<=s.size(); i++){
            char ch = s[i];
            ans = ans^ch;
        }
        for(int j=0; j<=t.size(); j++){
            char ch = t[j];
            ans = ans^ch;
        }
        return ans;
    }
};