#include <iostream>
#include <vector>
#include <cmath>

#define lld long long int

using namespace std;

int main(){
	lld n;
	cin >> n;
	lld pval = 0;
	lld time = 0;
	for(lld i = 0, val; i < n; i++){
		cin >> val;
		time += abs(pval - val);
		pval = val;
	}
	time += n + n-1; //eating n nuts + jumping n trees
	cout << time << endl;
}



