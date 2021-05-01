#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	int count1 = 0, count2 = 0, count3 = 0;
	for(auto x : s){
		if(x == '1')
			count1++;
		else if(x == '2')
			count2++;
		else if(x == '3')
			count3++;
	}
	if(count1 != 0){
		cout << '1';
		count1--;
	}
	else if(count2 != 0){
		cout << '2';
		count2--;
	}
	else{
		cout << '3';
		count3--;
	}
	while(count1--)
		cout << "+1";
	while(count2--)
		cout << "+2";
	while(count3--)
		cout << "+3";
}

