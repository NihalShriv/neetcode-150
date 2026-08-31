class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        char dem='#';
        for(auto it:strs){
            array<int,26> freq{};
            ostringstream oss;
            for(auto it2:it){
                freq[it2-97]++;
            }
            for(int j=0;j<26;j++){
                oss<<freq[j];
                if(j < 25){
                    oss<<dem;
                }
            }
            mp[oss.str()].push_back(it);
        }
        vector<vector<string>> ans;
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
