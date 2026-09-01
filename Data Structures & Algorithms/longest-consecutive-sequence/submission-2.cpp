class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(auto it:nums){
            st.insert(it);
        }
        int ans=0;
        for(auto it:st){
            if(!st.count(it-1)){
                int currLength=1;
                int currNum=it;
                while(st.count(currNum+1)){
                    currNum += 1;
                    currLength++;
                }
                ans = max(ans, currLength);
            }
        }
        return ans;
    }
};
