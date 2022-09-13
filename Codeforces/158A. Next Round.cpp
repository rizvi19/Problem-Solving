#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, a[101], c=0;
	
	cin >> n >> k;
	
	for(int i=0; i<n; i++){
	    cin >> a[i];
	}
	
	int x = a[k-1];
	
	sort(a, a+n);
	
	for(int i=0; i<n; i++){
	    if(a[i] >= x && a[i] != 0){
	        c++;
	    }
	}
	
	cout << c;
	return 0;
}
