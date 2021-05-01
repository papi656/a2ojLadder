#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	set<char> cnt;
	for(auto x : s){
		cnt.insert(x);
	}
	int num = cnt.size();
	if(num % 2 != 0)
		cout << "IGNORE HIM!";
	else
		cout << "CHAT WITH HER!";
}


