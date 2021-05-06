#include <iostream>
#include <string>

using namespace std;

bool found(string a, string s){
	int pos = 0;
	for(int i = 0; i < s.size(); i++){
		if(a[pos] == s[i])
			pos++;
	}
	if(pos == a.size())
		return true;
	else
		return false;
}

int main(){
	string s;
	cin >> s;
	bool val = found("hello", s);
	if(val)
		cout << "YES";
	else
		cout << "NO";
}
