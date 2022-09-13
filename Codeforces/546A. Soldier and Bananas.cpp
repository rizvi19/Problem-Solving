#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int k, n, w;
	
	cin >> k >> n >> w;
	
	int money = (k*w*(w+1))/2 - n;
	if(money>=0){
	    cout << money;    
	}
	else cout << 0;
	
    
	return 0;
}
