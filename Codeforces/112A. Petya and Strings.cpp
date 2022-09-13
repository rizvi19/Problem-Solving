#include <bits/stdc++.h>
using namespace std;

int main() {
	string x, y;
	int c=0;
	
	getline(cin, x);
	getline(cin, y);
	cin >> x >> y;
	for(int i=0; i<x.size(); i++){
	    if(tolower(x[i]) > tolower(y[i])){c=1;break;}
	    if(tolower(x[i]) < tolower(y[i])){c=-1; break;}
	}
	cout << c;
	


	return 0;
}
