class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> hello;

        for(auto it:nums){
            if(hello.insert(it).second == false){
                return true;
            }
        }
        return false;
    }
};