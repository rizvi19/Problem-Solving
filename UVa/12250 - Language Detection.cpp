#include <bits/stdc++.h>
using namespace std;

void solve() {
	string a, e = "HELLO", s="HOLA", g="HALLO", f="BONJOUR", i="CIAO", r="ZDRAVSTVUJTE";
	int x=3000;
	for(int m=0; m<x; m++){
	cin >> a;
	if(a=="#"){
	    break;
	}
	
	if(a.compare(e)==0){
	    cout << "Case " << m+1 << ": " << "ENGLISH" << "\n";
	}else if(a.compare(s)==0){
	    cout <<  "Case " << m+1 << ": " << "SPANISH" << "\n";
	}else if(a.compare(g)==0){
	    cout << "Case " << m+1 << ": " <<  "GERMAN" << "\n";
	}else if(a.compare(f)==0){
	    cout << "Case " << m+1 << ": " <<  "FRENCH" << "\n";
	}else if(a.compare(i)==0){
	    cout << "Case " << m+1 << ": " <<  "ITALIAN" << "\n";
	}else if(a.compare(r)==0){
	    cout << "Case " << m+1 << ": " <<  "RUSSIAN" << "\n";
	}else{
	    cout << "Case " << m+1 << ": " <<  "UNKNOWN" << "\n";
	}
	
	}
	
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t = 1;
	// cin >> t;
	while (t--){
	    solve(); 
	} 
	
    return 0;
}