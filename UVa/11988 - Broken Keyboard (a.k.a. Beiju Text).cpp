#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
	while(cin >> s){
	    list <char> x;
	    list <char>::iterator y=x.begin();
	    for(int i=0; i<s.size(); i++){
	        if(s[i]=='['){
	            y=x.begin();
	        }
	        
	        if(s[i]==']'){
	            y=x.end();
	        }
	        
	        if(s[i]!='[' && s[i]!=']'){
	            x.insert(y, s[i]);
	        }
	    }
	    
	    
	    for(y=x.begin(); y!=x.end(); y++){
	        cout << *y;
	    }
	    cout << "\n";
	}
	
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