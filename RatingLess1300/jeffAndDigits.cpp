#include <iostream>
#include <map>

using namespace std;

int main(){
	int n;
	cin >> n;
	map<int, int> cnt;
	for(int i = 0; i < n; i++){
		int value;
		cin >> value;
		cnt[value]++;
	}
	int l = cnt[5];

	//Can replace this while loop with l -= l%9;
	while(1){    
		if((l*5) % 9 == 0){
			break;
		}
		l--;
	}
	int zcnt = cnt[0];
	if(cnt[0] == 0)
		cout << "-1";
	else if (l == 0)
		cout << "0";
	else{
		while(l){
			cout << "5";
			l--;
		}
		while(zcnt){
			cout << "0";
			zcnt--;
		}
	}
}



