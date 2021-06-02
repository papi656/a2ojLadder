#include <iostream>
#include <vector>
#include <algorithm>

#define lld long long int

using namespace std;

int main(){
	lld n; 
	cin >> n;
	vector<lld> v, u;
	for(lld i = 0, val; i < n; i++){
		cin >> val;
		v.push_back(val);
		u.push_back(val);
	}
	sort(u.begin(), u.end());
	lld sumv = 0, sumu = 0;
	for(lld i = 0; i < n; i++){
		sumv += v[i];
		v[i] = sumv;
		sumu += u[i];
		u[i] = sumu;
	}
	lld m;
	cin >> m;
	while(m--){
		lld t, l, r;
		cin >> t >> l >> r;
		lld output = 0;
		if(t == 1){
			if(l != 1)
				output = v[r-1] - v[l-2];
			else
				output = v[r-1];
			cout << output << endl;
		}
		else{
			if(l != 1)
				output = u[r-1] - u[l-2];
			else
				output = u[r-1];
			cout << output << endl;
		}
	}
}

			


