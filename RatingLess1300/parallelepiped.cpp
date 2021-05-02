#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int ab, bc, ac;
	cin >> ab >> bc >> ac;
	int a, b, c;
	a = sqrt((ab*ac)/bc);
	b = sqrt((bc*ab)/ac);
	c = sqrt((ac*bc)/ab);
	int sum = 4 * (a + b + c);
	cout << sum;
}

