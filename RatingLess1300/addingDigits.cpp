#include <iostream>

#define lld long long int

using namespace std;

int main(){
	lld a, b, n;
	cin >> a >> b >> n;
	int val;
	bool possible = false;
	for(lld i = 0; i <= 9; i++){
		lld num = a*10 + i;
		if(num % b == 0){
			val = i;
			possible = true;
			break;
		}
	}
	if(possible){
		cout << a << val;
		for(lld i = 1; i < n; i++)
			cout << "0";
	}
	else
		cout << "-1";
}


	
