// https://leetcode.com/problems/first-bad-version/description/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    long long firstBadVersion(int n) {
        long long l=1, r=n, mid, ans;
        
        while(l<=r){
            mid=(l+r)/2;
            
            if(isBadVersion(mid)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        
        return ans;
    }
};
