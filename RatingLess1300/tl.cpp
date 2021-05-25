#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int mina = 1e4, maxa = -1, minb = 1e4;
	for(int i = 0, val; i < n; i++){
		cin >> val;
		if(val < mina)
			mina = val;
		if(val > maxa)
			maxa = val;
	}
	for(int i = 0, val; i < m; i++){
		cin >> val;
		if(val < minb)
			minb = val;
	}
	vector<int>::iterator it;
	bool possible = false;
	int validtl = maxa;
	if(maxa > minb)
		possible = false;
	else{
		for(int i = 0; i < (minb-maxa); i++){
			if(2*mina <= validtl && validtl < minb){
				possible = true;
				break;
			}
			validtl++;
		}
	}
	if(possible)
		cout << validtl;
	else
		cout << "-1";
}
