#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	string::iterator it;
	for(it = s.begin(); it < s.end(); it++){
		if(*it == '.')
			cout << '0';
		else if(*it == '-'){
			it++;
			if(*it == '.')
				cout << '1';
			else
				cout << '2';
		}
	}
}

