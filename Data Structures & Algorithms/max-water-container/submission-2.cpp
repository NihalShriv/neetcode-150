class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=0;
        int left=0;
        int right=heights.size()-1;
        ans=min(heights[left],heights[right])*(right-left);
        while(left<right){
            if(heights[left]<=heights[right]){
                left++;
                int check=min(heights[left],heights[right])*(right-left);
                if(check>ans) ans=check;
            }
            else if(heights[left]>=heights[right]){
                right--;
                int check=min(heights[left],heights[right])*(right-left);
                if(check>ans) ans=check;
            }
        }
        return ans;
    }
};
