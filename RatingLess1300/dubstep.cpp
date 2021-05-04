#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	string ans = "";
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'W' && s.substr(i, 3) == "WUB"){
			if(ans.size() != 0)
				ans += " ";
			i = i+2;
		}
		else
			ans += s[i];
	}
	int size = ans.size();
	if(ans[size - 1] == ' ')
		ans.resize(size-1);
	cout << ans;
}
		
	
