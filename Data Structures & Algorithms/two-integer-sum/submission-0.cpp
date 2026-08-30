class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> check(nums);
        vector<int> ans;
        for(int i=0; i<check.size();i++){
            check[i] = target-nums[i];
        }
        for(int i=0; i<check.size();i++){
            for(int j=i+1; j<check.size();j++){
                if(nums[i] == check[j]){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
    }
};
