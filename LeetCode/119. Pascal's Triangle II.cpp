class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector< vector< int > > a;
        for(int i=0; i<=rowIndex; i++){
            a.push_back(vector<int> (i+1, 1));
            for(int j=1; j<i; j++){
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
        return a[rowIndex];
    }
};
