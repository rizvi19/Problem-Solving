#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string x;
	int n, count=0;
	
	cin >> x;
	n = x.length();
	
	for(int i=0; i<n-1;i++){
	    for(int j=i+1; j<n; j++){
	        
	        if(x[i] == x[j]) 
	        x[j] = '.';

	    }
	}
	
	for(int i=0; i<n; i++){
	    if(x[i]>96 && x[i]<123){
	        count++;
	    }
	}
	if(count%2 == 0) {cout << "CHAT WITH HER!";}
	else {cout<< "IGNORE HIM!";}
	
	return 0;
}
