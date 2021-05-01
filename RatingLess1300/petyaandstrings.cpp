#include <iostream>
#include <string>

using namespace std;

string tolower(string s){
	string ans = "";
	for(auto x : s){
		if(x < 91)
			ans += (char)(x + 32);
		else
			ans += x;
	}
	return ans;
}

int main(){
	string first, second;
	cin >> first >> second;
	first = tolower(first);
	second = tolower(second);
	string::iterator it1, it2;
	it1 = first.begin();
	it2 = second.begin();
	bool equal = true;
	while(it1 != first.end()){
		if(*it1 < *it2){
			cout << "-1";
			equal = false;
			break;
		}
		else if(*it1 > *it2){
			cout << "1";
			equal = false;
			break;
		}
		it1++;
		it2++;
	}
	if(equal)
		cout << "0";
}

