#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

#define lld long long int

using namespace std;

int main(){
	lld n;
	cin >> n;
	vector<pair<lld, lld>> seg;
	lld l, r, minl, maxr;
	bool possible = false;
	lld pos = 0;
	cin >> l >> r;
	seg.push_back({l, r});
	minl = l;
	maxr = r;
	for(lld i = 1; i < n; i++){
		cin >> l >> r;
		seg.push_back({l, r});
		minl = min(minl, l);
		maxr = max(maxr, r);
	}
	vector<pair<lld, lld>>::iterator it;
	it = seg.begin();
	lld i = 1;
	while(it != seg.end()){
		if(it->first == minl && it->second == maxr){
			possible = true;
			pos = i;
		}
		it++;
		i++;
	}
	if(possible)
		cout << pos;
	else
		cout << "-1";
}



	
