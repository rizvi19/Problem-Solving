#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, x, y;
	for(int i=1; i<6; i++){
	    for(int j=1; j<6; j++){
	        cin >> a;
	        if(a == 1){
	            x=i; y=j;
	        }
	    }
	}
	
	cout << abs(3-x) + abs(3-y);

	return 0;
}
