#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	string s;
	cin >> s;
	map<char, int> cnt;
	for(int i = 0; i < s.size(); i++){
		cnt[s[i]]++;
	}
	map<char, int>::iterator it;
	it = cnt.begin();
	int a = 0;
	while(it != cnt.end()){
		if(it->second % 2 != 0)
			a++;
		it++;
	}
	if(a%2 == 0 && a != 0)
		cout << "Second\n";
	else
		cout << "First\n";
}


	
