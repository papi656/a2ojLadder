#include <iostream>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int max = -1, maxpos = -1;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		if(((a-1)/m) >= max){
			max = (a-1)/m;
			maxpos = i+1;
		}
	}
	cout << maxpos;
}

