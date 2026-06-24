class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int len = 1 ,maxlen = 0 , i = 0;
        set<int> st(nums.begin(),nums.end());
        for(int n : st){
            i = n;
            if(st.find(i+1) != st.end())
                len++;
            else 
                len = 1;
            maxlen = max(maxlen,len);
        }
        return maxlen;
    }
};
