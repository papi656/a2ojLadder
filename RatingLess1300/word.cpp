#include <iostream>
#include <string>

using namespace std;

string toUpper(string s){
	string ans;
	for(auto x : s){
		if(x > 90)
			//ans.append((char)(x - 32));
			ans += (char)(x - 32);
		else
			//ans.append(x);
			ans += x;
	}
	return ans;
}

string toLower(string s){
	string ans;
	for(auto x : s){
		if(x < 97)
		//	ans.append((char)(x + 32));
			ans += (char)(x + 32);
		else
		//	ans.append(x);
			ans += x;
	}
	return ans;
}


int main(){
	string s;
	cin >> s;
	int uppercnt = 0, lowercnt = 0;
	for(auto x : s){
		if((int)x < 91)
			uppercnt++;
		else
			lowercnt++;
	}
	string output;
	if(uppercnt > lowercnt)
		output = toUpper(s);
	else
		output = toLower(s);
	cout << output;
}



