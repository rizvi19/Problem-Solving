// https://leetcode.com/problems/maximum-product-difference-between-two-pairs/description/

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long n = nums.size();

        long long ans = nums[n-1]*nums[n-2] - nums[0]*nums[1];

        return ans;
        
    }
};
