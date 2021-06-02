#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

#define lld long long int

using namespace std;

int main(){
	lld n, k;
	cin >> n >> k;
	string s;
	cin.ignore();
	cin >> s;
	map<char, lld> cnt;
	for(int i = 0; i < s.size(); i++){
		cnt[s[i]]++;
	}
	vector<lld> times;
	for(auto x : cnt){
		times.push_back(x.second);
	}
	sort(times.rbegin(), times.rend());
	lld cost = 0;
	for(int i = 0; i < times.size(); i++){
		lld t = min(times[i], k);
		cost += t*t;
		k -= t;
		if(k <= 0)
			break;
	}
	cout << cost << endl;
}



