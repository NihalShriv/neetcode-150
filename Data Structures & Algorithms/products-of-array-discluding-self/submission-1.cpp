class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total=1;
        int zero=0;
        vector<int> ans;
        for(auto it:nums){
            if(it == 0){
                zero++;
                continue;
            }
            else{
            total = total*it;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0 and zero==1){
                ans.push_back(total);
            }
            else if(zero != 0){
                ans.push_back(0);
            }
            else{
                ans.push_back(total/nums[i]);
            }
        }
        return ans;
    }
};
