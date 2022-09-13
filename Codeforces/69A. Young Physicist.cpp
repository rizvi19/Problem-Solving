#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int x;
	cin >> x;
	
	int a[x][3];
	
	for(int i=0; i<x; i++){
	    for(int j=0; j<3;j++){
	        cin >> a[i][j];
	    }
	}
	int count0 = 0, count1 = 0, count2 = 0;
	
	for(int i=0; i<x; i++){
	    count0 += a[i][0];
	}
	for(int i=0; i<x; i++){
	    count1 += a[i][1];
	}
	for(int i=0; i<x; i++){
	    count2 += a[i][2];
	}
	
	if(count0 == 0 && count1 == 0 && count2 == 0){
	    cout << "YES";
	}
	else cout << "NO";
	return 0;
}