#include <iostream>
#include <map>

#define lld long long int

using namespace std;

int main(){
	int n;
	cin >> n;
	map<lld, int> cnt;
	lld min = 1e10, pos = 0;
	for(int i = 0; i < n; i++){
		lld value;
		cin >> value;
		cnt[value]++;
		if(value < min){
			min = value;
			pos = i;
		}
	}
	if(cnt[min] > 1){
		cout << "Still Rozdil";
	}
	else
		cout << (pos + 1);
}



