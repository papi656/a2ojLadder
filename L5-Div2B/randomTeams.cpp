#include <iostream>

#define lld long long int

using namespace std;

int main(){
	lld n, m;
	cin >> n >> m;
	lld a = n/m;
	lld b = n % m;
	lld min = ((a+1)*a*b)/2;
	min += (m-b)*(a*(a-1))/2;

	lld max = ((n - m + 1)*(n - m)) / 2;
	cout << min << " " << max;
}


