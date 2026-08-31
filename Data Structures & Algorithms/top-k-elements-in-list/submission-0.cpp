class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(auto it:nums){
            if(mp.find(it) == mp.end()){
                mp.insert({it, 1});
            }
            else{
                mp[it]++;
            }
        }
        vector<pair<int,int>> so;
        for(auto it:mp){
            so.push_back({it.second,it.first});
        }
        sort(so.begin(),so.end(), greater<pair<int,int>>());
        for(int i=0;i<k;i++){
            ans.push_back(so[i].second);
        }
        
        return ans;
    }
};
