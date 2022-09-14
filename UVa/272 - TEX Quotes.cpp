#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, m=1;
	char s;
	while(cin.get(s)){
			if(s== '"' && m==1){
				m=2;
				cout << '`' << '`';
			}
			
			else if(s== '"' && m==2){
				m=1;
				cout << "'" << "'";
			}
			else cout << s;
		}
		//cout << "\n";
	
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