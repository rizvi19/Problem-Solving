#include <bits/stdc++.h>
using namespace std;



int broItWasHard(int arr[], int x){
    int max=0, anss = INT_MIN;
    for(int i=0; i<x; i++){
        max +=  arr[i];
        
        if(max>anss){
            anss = max;
        }
        if(max<0){
            max=0;
        }
    }
    
    return anss;
}


void solve() {
	int n, a[101][101], ans = INT_MIN;
	cin >> n;
	for(int i=0; i<n; i++){
	    for(int j=0; j<n; j++){
	        cin >> a[i][j];
	    }
	}
	
	for(int i=0; i<n; i++){
	    int pre[101]={0};
	    for(int j=i; j<n; j++){
	        for(int k=0; k<n; k++){
	            pre[k] += a[j][k];  
	        }
	        
	        ans = max(ans, broItWasHard(pre, n));
	    }
	    
	}
	
	cout << ans << "\n";
	
	
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t = 1;
	// cin >> t;
	while (t--) solve();
	
    return 0;
}