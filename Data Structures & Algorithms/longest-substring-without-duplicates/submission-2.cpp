class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=1;
        int ans=1;
        unordered_set<char> check;
        if(s.size() != 0 ){
            check.insert(s[0]);
        }
        else{
            return 0;
        }
        while(left <= right and right < s.size()){
            if(check.find(s[right]) == check.end()){
                check.insert(s[right]);
                if(ans < check.size()) ans = check.size();
                right++;
            }
            else{
                if(ans < check.size()) ans = check.size();
                check.erase(s[left]);
                left++;
            }
        }
        return ans;
    }
};
