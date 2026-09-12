class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> small;
        for(auto it:s1){
            if(small.contains(it)){
                small[it]++;
            }
            else{
                small.insert({it, 1});
            }
        }
        int left=0;
        int right=s1.size()-1;
        unordered_map<char,int> check;
        for(int i=0;i<=right;i++){
            check[s2[i]]++;
        }
        while(right < s2.size()){
            if(check == small){
                return true;
            }
            else
            {
                if(check[s2[left]] == 1) check.erase(s2[left]);
                else check[s2[left]]--;
                left++;
                if(right+1 == s2.size()) break;
                else{
                    right++;
                    check[s2[right]]++;
                }
            }
        }
        return false;
    }
};
