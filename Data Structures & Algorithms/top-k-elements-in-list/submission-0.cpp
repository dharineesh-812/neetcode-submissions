class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int> mp;
        for(int num : nums){
            mp[num]++;
        }
        vector<pair<int,int>> v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](const pair<int,int> &a,const pair<int,int> &b){
            return a.second>b.second;
        });
        for(auto &it : v){
            ans.push_back(it.first);
            k--;
            if(k == 0)
                break;
        }
        return ans;
    }
};
