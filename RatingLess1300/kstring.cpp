#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	int k;
	string s;
	cin >> k;
	cin.ignore();
	cin >> s;
	map<char, int> cnt;
	for(auto x : s){
		cnt[x]++;
	}
	map<char, int>::iterator it;
	it = cnt.begin();
	int exist = true;
	string copy = "";
	while(it != cnt.end()){
		if((it->second % k) != 0){
			exist = false;
			break;
		}
		int times = it->second / k;
		while(times--)
			copy += it->first;
		it++;
	}
	if(exist)
		while(k--)
			cout << copy;
	else
		cout << "-1";
}



