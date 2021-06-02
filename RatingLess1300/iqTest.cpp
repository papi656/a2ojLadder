#include <iostream>
#include <map>

using namespace std;

int main(){
	char sq[4][4];
	char val;
	map<char, int> cnt;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cin >> val;
			sq[i][j] = val;
		}
	}
	bool possible = false;
//	int cnthash = 0, cntdot = 0;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cnt[sq[i][j]]++;
			cnt[sq[i+1][j]]++;
			cnt[sq[i][j+1]]++;
			cnt[sq[i+1][j+1]]++;
			if(cnt['#'] >= 3 || cnt['.'] >= 3){
				possible = true;
				i = 5;
				j = 5;
			}
			cnt['#'] = 0;
			cnt['.'] = 0;
		}
	}
	if(possible)
		cout << "YES";
	else
		cout << "NO";
}

