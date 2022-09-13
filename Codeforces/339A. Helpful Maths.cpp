#include <bits/stdc++.h>
using namespace std;

int main() {
	string  y;
	int x[1001];
	int c=0;
	cin >> y;
	
	int n = y.length();
	
	for(int i=0; i<n; i++){
	    
	    if(y[i] == '+') continue;
	    else x[c] = y[i] - '0';
	    c++;
	}
	
	sort(x, x+c);
	for(int i=0; i<c; i++){
	    cout << x[i];
	    if(i == c-1) break;
	    cout << '+';
	}
	
	return 0;
}