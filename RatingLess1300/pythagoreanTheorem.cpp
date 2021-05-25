#include <iostream>
#include <cmath>

#define lld long long int

using namespace std;

int main(){
	lld n;
	cin >> n;
	lld cnt = 0;
	for(int i = 1; i < n; i++){
		for(int j = i+1; j < n; j++){
			lld c = i*i + j*j;
			lld d = sqrt(c);
			if(d*d == c && d <= n)
				cnt++;
		}
	}
	cout << cnt;
}
