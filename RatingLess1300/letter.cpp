#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	map<char, int> cnt;
	string::iterator it1, it2;
	it1 = s1.begin();
	while(it1 != s1.end()){
		if(*it1 != ' ')
			cnt[*it1]++;
		it1++;
	}
	it2 = s2.begin();
	bool possible = true;
	while(it2 != s2.end()){
		if(*it2 != ' '){
			if(cnt[*it2] < 1){
				possible = false;
				break;
			}
			cnt[*it2]--;
		}
		it2++;
	}
	if(possible)
		cout << "YES";
	else
		cout << "NO";
}


