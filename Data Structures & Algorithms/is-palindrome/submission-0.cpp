class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int l = 0, h = n-1;
        while(l<h){
            if(!isalnum(s[l]) ){
                l++;
                continue;
            }
            if(!isalnum(s[h]) ){
                h--;
                continue;
            }

            if(tolower(s[l]) != tolower(s[h]))
                return false;
            l++;
            h--;
        }
        return true;
    }
};
