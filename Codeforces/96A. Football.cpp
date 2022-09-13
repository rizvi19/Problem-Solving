#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string x;
	int n, count=1;
	
	cin >> x;
	n = x.length();
	
	for(int i=0; i<n-1; i++){
	    if(x[i] == x[i+1]){
	        count++;
	        if(count >= 7) break;
	    }
	    else count = 1;
	    
	}
	
	if(count >= 7){
	    cout << "YES";
	}
	else cout << "NO";
	return 0;
}
