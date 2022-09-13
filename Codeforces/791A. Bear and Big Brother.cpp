#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int a, b;
	
	cin >> a >> b;
	
	int years = floor(((log(b)-log(a))/log(1.5)))+1;
	
	cout << years;
    
	return 0;
}