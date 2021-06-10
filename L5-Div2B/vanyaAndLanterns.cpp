#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

#define lld long long int

using namespace std;

int main(){
	lld n, l;
	cin >> n >> l;
	vector<lld> a;
	for(lld i = 0, val; i < n; i++){
		cin >> val;
		a.push_back(val);
	}
	sort(a.begin(), a.end());
	double dis = 0;
	if(a[0] != 0)
		dis = 2 * (double)a[0];
	for(lld i = 0; i < a.size() -1; i++){
		dis = max(dis, (double)(a[i+1] - a[i]));
	}
	dis = max(dis, 2*(double)(l - a[n-1]));
	cout << setprecision(9);
//	if(a[0] != 0)
//		cout << dis << endl;
//	else
		cout << dis/2.0 << endl;
}
