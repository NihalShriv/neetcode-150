class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> wh;
        for(auto it:s){
            if((it>=48 and it<=57) or (it>=65 and it<=90) or (it>=97 and it<=122)){
                it = tolower(it);
                wh.push_back(it);
            }
        }
        string str(wh.begin(),wh.end());
        int right=str.size()-1;
        int left=0;
        while(left < right){
            if(str[left] != str[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
