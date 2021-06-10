#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

#define lld long long int 

using namespace std;

int main(){
	string s;
	cin >> s;
	int k;
	cin >> k;
	vector<int> w;
	map<char, int> value;
	for(int i = 0, val; i < 26; i++){
		cin >> val;
		w.push_back(val);
		value[(char)('a'+i)] = val;
	}
	sort(w.begin(), w.end());
	lld sum = 0;
	for(int i = 0; i < s.size(); i++){
		sum += (i+1)*value[s[i]];
	}
	int r = w[25];
	int j = s.size()+1;
	while(k--){
		sum += j*r;
		j++;
	}
	cout << sum << endl;
}




