#include <iostream>

#define lld long long int

using namespace std;

int main(){
	lld n, k;
	cin >> n >> k;
	if(k <= ((n+1)/2)){
		cout << (2*k -1);
	}
	else{
		lld val = k % ((n+1)/2);
		if(val == 0)
			cout << n;
		else
			cout << (2*val);
	}
}


