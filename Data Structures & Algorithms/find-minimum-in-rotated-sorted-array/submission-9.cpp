class Solution {
public:
    int findMin(vector<int> &nums) {
        int left=0;
        int right=nums.size()-1;
        int mid=0;
        while(left<=right){
            mid = left+(right-left)/2;
            if(nums.size()==1){
                return nums[0];
            }
            else if(nums.size()==2){
                if(nums[0]<nums[1]) return nums[0];
                else return nums[1];
            }
            else if(nums.size()>2){
                if(nums[left]<nums[right]){
                    return nums[left];
                }
                else if(left==right){
                    return nums[left];
                }
                else if(nums[mid]>=nums[right]){
                    left=mid+1;
                }
                else if(nums[mid]<nums[right]){
                    if(nums[mid-1]>=nums[mid]){
                        return nums[mid];
                    }
                    else{
                        right=mid;
                    }
                }
            }
        }
        return 0;
    }
};
