#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	int pos = -1, ppos = -1;
	int lpos = s.size() - 1;
	int ldig = s[lpos] - '0';
	for(int i = 0; i < s.size(); i++){
		if((s[i]-'0') % 2 == 0)
			pos = i;
		if(pos != -1 && (s[pos]-'0') < ldig){
			ppos = pos;
			break;
		}
	}
	if(ppos == -1)
		ppos = pos;
	if(ppos == -1 && pos == -1)
		cout << "-1\n";
	else{
		for(int i = 0; i < ppos; i++)
			cout << s[i];
		cout << ldig;
		for(int i = ppos + 1; i < s.size() -1 ; i++)
			cout << s[i];
		cout << s[ppos];
	}
}

		


