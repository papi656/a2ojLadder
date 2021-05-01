#include <iostream>
#include <map>

using namespace std;

int main(){
	string a, b, c;
	cin >> a >> b >> c;
	map<char, int> cnt;
	for(auto x : a)
		cnt[x]--;
	for(auto x : b)
		cnt[x]--;
	for(auto x : c)
		cnt[x]++;
	map<char, int>::iterator it;
	int possible = 1;
	for(it = cnt.begin(); it != cnt.end(); it++){
		if(it->second < 0 || it->second > 0)
			possible = 0;
	}
	if(possible)
		cout << "YES";
	else
		cout << "NO";
}

