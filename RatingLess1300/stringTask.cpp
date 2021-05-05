#include <iostream>
#include <string>

using namespace std;

int main(){
	string s, ans = "";
	cin >> s;
	for(auto x : s){
		if(x < 97)
			x =(char)(x + 32);
		if(x == 'a' || x == 'o' || x == 'y' || x == 'e' || x == 'u' || x == 'i'){}
		else{
			ans += '.';
			ans += x;
		}
	}
	cout << ans;
}


		
	
