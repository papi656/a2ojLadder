#include <iostream>

#define lld long long int

using namespace std;

int main(){
	lld x, y, n;
	cin >> x >> y >> n;
	lld val, mod = 1e9+7;
	lld pos = n % 6;
	if(pos == 1 || pos == 4)
		val = (pos % 2 == 0) ? -x : x;
	else if(pos == 2 || pos == 5)
		val = (pos % 2 == 0) ? y : -y;
	else if(pos == 3)
		val = y - x;
	else
		val = -y + x;
	cout << (val + 2*mod) % mod;
}


