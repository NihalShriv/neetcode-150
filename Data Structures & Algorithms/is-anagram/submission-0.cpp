class Solution {
public:
    bool isAnagram(string s, string t) {
        multiset<char> a,b;
        for(auto it:s){
            a.insert(it);
        }
        for(auto it:t){
            b.insert(it);
        }
        if (a==b){
            return true;
        }
        else{
            return false;
        }
    }
};
