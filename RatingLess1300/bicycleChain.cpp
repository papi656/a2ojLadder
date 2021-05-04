#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int main(){
	int n, m;
	cin >> n;
	int a[60], b[60];
	for(int i = 0; i < n; i++){
		int val;
		cin >> val;
		a[i] = val;
	}
	cin >> m;
	for(int i = 0; i < m; i++){
		int val;
		cin >> val;
		b[i] = val;
	}
	map<int, int> cnt;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(b[j]/a[i] == ceil((float)b[j]/a[i])){
				cnt[b[j]/a[i]]++;
			}
		}
	}
	map<int, int>::reverse_iterator rit;
	rit = cnt.rbegin();
	cout << rit->second;
}


