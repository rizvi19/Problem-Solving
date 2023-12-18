class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(101, 0);
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }

        int sum=0;
        for(int i=0; i<101; i++){
            int x=freq[i];
            sum+=(x*(x-1))/2;
        }

        return sum;
        
    }
};
