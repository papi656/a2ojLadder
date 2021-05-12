#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	bool possible = true;
	vector<int> pos;
	if(s1.size() != s2.size())
		cout << "NO";
	else{
		for(int i = 0; i < s1.size(); i++){
			if(s1[i] != s2[i]){
				pos.push_back(i);	
			}
		}
		if(pos.size() != 2)
			possible = false;
		char temp = s1[pos[0]];
		s1[pos[0]] = s1[pos[1]];
		s1[pos[1]] = temp;
		if(s1 != s2)
			possible = false;
		if(possible)
			cout << "YES";
		else
			cout << "NO";
	}
}

