class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> arr(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
            while(!st.empty() and temperatures[i]>temperatures[st.top()]){
                int res=st.top();
                st.pop();
                arr[res]=i-res;
            }
            st.push(i);
        }
        return arr;
    }
};
