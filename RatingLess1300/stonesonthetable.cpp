#include <iostream>
#include <string>

using namespace std;

int main(){
	int num;
	string s;
	cin >> num;
	cin.ignore();
	cin >> s;
	int count = 0;
	for(int i = 1; i < num; i++){
		if(s[i-1] == s[i]){
			s[i] = s[i-1];
			count++;
		}
	}
	cout << count;
}
		
