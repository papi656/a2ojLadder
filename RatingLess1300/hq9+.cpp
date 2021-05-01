#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	int output = 0;
	for(auto x : s){
		if(x == 'H' || x == 'Q' || x == '9'){
			output = 1;
			break;
		}
	}
	if(output)
		cout << "YES";
	else
		cout << "NO";
}

