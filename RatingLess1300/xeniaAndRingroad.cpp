#include <iostream>

#define lld long long int
using namespace std;

int main(){
	lld n, m;
	cin >> n >> m;
	lld steps = 0;
	lld a, prev;
	cin >> a;
	steps += a - 1;
	while(--m){
		prev = a;
		cin >> a;
		if(prev == a)
			continue;
		if(a > prev){
			steps += a - prev;
		}
		else{
			steps += n - prev + a;
		}
	}
	cout << steps;
}



