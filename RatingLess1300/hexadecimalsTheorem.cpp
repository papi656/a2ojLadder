#include <iostream>
#include <vector>

#define lld long long int

using namespace std;

int main(){
	lld n;
	cin >> n;

	//Or instead of doing all these heavylifting, the solution was always in front of our eyes
	/*

	   cout << "0 0 " << n;

	*/

	// Above cout was all need to get accepted


	vector<lld> fib;
	fib.push_back(0);
	fib.push_back(1);
	lld a = 0, b = 1;
	while(b < n){
		lld tmp = a;
		a = b;
		b += tmp;
		fib.push_back(b);
	}
	if(n > 1){
		vector<lld>::reverse_iterator it;
        	it = fib.rbegin();
		cout << *(it + 2) << " " << *(it + 2) << " " << *(it + 3);
	}
	else if (n == 1){
		cout << "0 1 0";
	}
	else
		cout << "0 0 0";
}
	


