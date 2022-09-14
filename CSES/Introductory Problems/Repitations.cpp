#include <bits/stdc++.h>
using namespace std;

void solve() {
	int maxx = 0, count=0;
	string s;
	cin >> s;
	
	for(int i=1; i<s.size(); i++){
	    if(s[i-1]==s[i]){
	        count++;
	        maxx = max(maxx, count);
	    }else{
	        count=0;
	    }
	}
	
	cout << maxx+1 << "\n";
	
	
	
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