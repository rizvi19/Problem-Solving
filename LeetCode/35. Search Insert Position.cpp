// https://leetcode.com/problems/search-insert-position/description/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        long long l=0, r=nums.size()-1, mid;
        
        while(l<=r){
            mid=(l+r)/2;
            
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
        
    }
};