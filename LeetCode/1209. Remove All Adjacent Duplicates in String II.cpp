// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/description/

class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector< pair< char, long long> > x;
        
        for(auto a:s){
            if(x.size()==0 || x.back().first != a)
                x.push_back({a, 1});
            else
                x.back().second++;
            
            if(x.back().second == k)
                x.pop_back();
        }
        
        string res;
        for(auto a:x)
            res.append(a.second, a.first);
        
        return res;
    }
};
