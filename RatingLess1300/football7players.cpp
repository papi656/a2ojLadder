#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	int cnt = 0;
	char charcnt = s[0];
	for(auto x : s){
		if(charcnt == x)
			cnt++;
		else
			cnt = 1;
		charcnt = x;
		if(cnt == 7)
			break;
	}
	if(cnt >= 7)
		cout << "YES";
	else
		cout << "NO";
}

