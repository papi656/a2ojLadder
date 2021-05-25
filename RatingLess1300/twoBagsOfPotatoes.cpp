#include <iostream>
#include <vector>

#define lld long long int

using namespace std;

int main(){
	lld y, k, n;
	cin >> y >> k >> n;
	lld x = y % k;
	lld toAdd = 0, i = 1;
	while(1){
		toAdd = i*k - x;
		if((toAdd + y) > n){
			if(i == 1)
				cout << "-1";
			break;
			}
		if(i == 1)
			cout << toAdd;
		else
			cout << " " << toAdd;
		i++;
	}
}
