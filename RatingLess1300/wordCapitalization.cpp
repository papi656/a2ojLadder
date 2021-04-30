#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	string::iterator it;
	it = s.begin();
	if(*it > 90)
		cout << (char)(*it - 32);
	else
		cout << *it;
	for(it = s.begin() + 1; it < s.end(); it++)
		cout << *it;
}

