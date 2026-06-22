class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.length()!=t.length())
            return false;
            int i=0;
        while(i<s.length() && i<t.length()){
            if(s[i]!=t[i])
                return false;
            i++;
        }
        return true;
    }
};
