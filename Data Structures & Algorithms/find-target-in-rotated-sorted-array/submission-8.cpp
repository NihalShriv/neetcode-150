class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int mid=left + (right-left)/2;
        if(nums.size()==1 and nums[0]==target){
            return 0;
        }
        else if(nums.size()==2){
            if(nums[0]==target) return 0;
            else if(nums[1] == target) return 1;
        }
         while(left<=right){
            mid = left + (right-left)/2;
            if(nums[mid] >= nums[left]){
                if(target==nums[mid]) return mid;
                if(nums[mid]>target and nums[left]<=target){
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
            else{
                if(target==nums[mid]) return mid;
                if(nums[mid]<target and nums[right]>=target){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
        }
        return -1;
    }
};
