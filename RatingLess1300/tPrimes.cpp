#include <iostream>
#include <cmath>

#define lld long long int

using namespace std;

int main(){
	lld n;
	cin >> n;
	for(lld i = 0; i < n; i++){
		lld x;
		cin >> x;
		lld sq = (lld)sqrt(x);
		bool prime = true;
		if(x == 1)
			prime = false;
		if(sq != 2 && sq % 2 == 0)
			prime = false;
		else if(sq != 2){
			for(lld j = 3; j*j <= sq; j += 2){
				if(sq % j == 0){
					prime = false;
					break;
				}
			}
		}
		if(sq * sq == x && prime)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}



	
