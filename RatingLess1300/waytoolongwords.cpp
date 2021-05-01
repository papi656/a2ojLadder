#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;
	cin.ignore();
	while(n--){
		string s;
		cin >> s;
		if(s.size() > 10){
			cout << *s.begin();
			cout << (s.size() - 2);
			cout << *s.rbegin();
		}
		else
			cout << s;
		cout << "\n";
	}
}


