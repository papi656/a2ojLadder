#include <iostream>

#define lld long long int

using namespace std;

int main(){
	int n;
	cin >> n;
	lld sum = 0;
	for(int i = 0, val; i < n; i++){
		cin >> val;
		sum += val;
	}
	if(sum % n == 0)
		cout << n << endl;
	else
		cout << n-1 << endl;
}


