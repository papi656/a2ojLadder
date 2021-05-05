#include <iostream>

using namespace std;

int main(){
	int n, a, b;
	cin >> n >> a >> b;
	int cnt = 0;
	for(int i = 0; i <= b; i++){
		if((n-1-i) >= a)
			cnt++;
	}
	cout << cnt;
}

