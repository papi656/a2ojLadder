#include <iostream>

using namespace std;

int main(){
	int n, sum = 0;
	cin >> n;
	double ans = 0;
	for(int i = 0; i < n; i++){
		int value;
		cin >> value;
		sum += value;
	}
	ans = (double)sum / n;
	cout << ans;
}

		
