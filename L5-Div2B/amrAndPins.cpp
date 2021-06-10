#include <iostream>
#include <cmath>

#define lld long long int

using namespace std;

int main(){
	lld r, x, y, xd, yd;
	cin >> r >> x >> y >> xd >> yd;
	lld dis = (x-xd)*(x-xd) + (y-yd)*(y-yd);
	dis = ceil(sqrt(dis));
//	cout << dis << endl;
	lld ans = ceil(dis*1.0 / (2*r));
	cout << ans << endl;
}

