#include <bits/stdc++.h>
using namespace std;

int main() {
	string x, y;
	
	
	getline(cin, x);
	int n = x.length();
	
	for(int i=0; i<n; i++){
	    if(tolower(x[i]) == 'a' || tolower(x[i]) == 'e' || tolower(x[i]) == 'i' || tolower(x[i]) == 'o' || tolower(x[i]) == 'u'  || tolower(x[i]) == 'y'){
            continue;	        
	    }
	    
	    else {
	        y.push_back('.');
	        y.push_back(tolower(x[i]));
	    }
	}
	
	cout << y;
	


	return 0;
}
