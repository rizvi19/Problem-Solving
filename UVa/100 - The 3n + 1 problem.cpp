#include <bits/stdc++.h>
using namespace std;

int conjecture(int x){
	int count=0;
	while(1){
		if(x==1){
			return count+1;	
		} 

		if(x%2){
			x = (3*x) + 1;
			count++;
		}
		else{
			x /= 2;
			count++;
		}

		
	}
	
}
void solve() {
	int i, j;

	// cin >> i >> j;
	// int i2 = i, j2 = j;
	// 	if(i>j){
	// 		swap(i, j);
	// 	}

	// 	int ans=0;
	// 	for(int k=i; k<=j; k++){
	// 		ans = max(ans, conjecture(k));
	// 	}

	// 	cout << i2 << " " << j2 << " " << ans;

	while(cin >> i >> j){
		int i2 = i, j2 = j;
		if(i>j){
			swap(i, j);
		}

		int ans=0;
		for(int k=i; k<=j; k++){
			ans = max(ans, conjecture(k));
		}

		cout << i2 << " " << j2 << " " << ans << "\n";
	}


}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
    
 	// clock_t z = clock();

	int t = 1;
	// cin >> t;

	while (t--) solve();

	// cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << "\n";
    
    return 0;
}
