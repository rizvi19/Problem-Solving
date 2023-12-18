// https://leetcode.com/problems/binary-search/description/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size(), l=0, r=n-1, mid;
        
        while(l<=r){
            mid=(l+r)/2;
            
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        
        return -1;
    }
};
