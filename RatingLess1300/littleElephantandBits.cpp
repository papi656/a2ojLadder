#include <iostream>
#include <string>

using namespace std;

int main(){
	string a;
	getline(cin , a);
	string ans = "";
	bool zeroFound = false;
	for(int i = 0; i < a.size(); i++){
		if(a[i] == '0' && !zeroFound){
			zeroFound = true;
			continue;
		}
		ans += a[i];
	}
	if(!zeroFound)  // for a containing no 0
		ans.pop_back();
	cout << ans;
}



