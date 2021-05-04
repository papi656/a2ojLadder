#include <iostream>
#include <string>

using namespace std;

int main(){
	string s, t;
	cin >> s >> t;
	bool correct = true;
	string::iterator it;
	string::reverse_iterator rit;
	it = s.begin();
	rit = t.rbegin();
	while(it != s.end()){
		if(*it != *rit){
			correct = false;
			break;
		}
		it++;
		rit++;
	}
	if(correct)
		cout << "YES";
	else
		cout << "NO";
}

