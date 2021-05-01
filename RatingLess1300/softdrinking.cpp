#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int num = min((k*l)/nl, (c*d));
	num = min(num, (p/np));
	cout << num/n;
}
