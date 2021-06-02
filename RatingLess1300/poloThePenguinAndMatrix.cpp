#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int n, m, d;
	cin >> n >> m >> d;
	vector<int> a;
	vector<int> diff;
	int pval = -1;
	for(int i = 0, val; i < n*m; i++){
		cin >> val;
		a.push_back(val);
		if(pval == -1)
			pval = val;
		if(pval != -1)
			diff.push_back(abs(pval - val));
	}
	bool possible = true;
	for(int i = 0; i < diff.size(); i++){
		if(diff[i] % d != 0){
			possible = false;
			break;
		}
	}
	sort(a.begin(), a.end());
	int steps = 0;
	if(possible){
		int mid = a[(n*m)/2];
		for(int i = 0; i < n*m; i++){
			steps += abs(a[i]-mid) / d;
		}
		cout << steps;
	}
	else
		cout << "-1";
}




	


