#include <iostream>

#define lld long long int

using namespace std;

int main(){
	lld n;
	cin >> n;
	for(lld i = 0; i < n; i++){
		if(i == n-1)
			cout << 3*n + i;
		else
			cout << 3*n + i << " ";
	}
}
