#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	int n; 
	cin >> n;
	map<string, int> cnt;
	while(n--){
		string a; 
		cin >> a;
		cnt[a]++;
	}
	map<string, int>::iterator it, it1;
	it = cnt.begin();
	if(cnt.size() == 1)
		cout << it->first;
	else{
		it1 = it++;
		if(it->second > it1->second)
			cout << it->first;
		else
			cout << it1->first;
	}
}

