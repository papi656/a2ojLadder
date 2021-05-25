#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, m;
	cin >> n >> m;
	if(n >= m){
		int cnt = m;
		while(cnt--){
			cout << "BG";
		}
		int bcnt = n - m;
		while(bcnt > 0){
			cout << "B";
			bcnt--;
		}
	}
	else{
		int cnt = n;
		while(cnt--){
			cout << "GB";
		}
		int gcnt = m - n;
		while(gcnt > 0){
			cout << "G";
			gcnt--;
		}
	}
}
	
