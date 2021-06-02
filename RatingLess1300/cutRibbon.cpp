#include <iostream>

using namespace std;

int main(){
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int sum = 0;
	for(int i = 0; i <= n/a; i++){
		for(int j = 0; j <= n/b; j++){
			if((n - (i*a + j*b)) % c == 0){
				int k = (n - (i*a + j*b)) / c;
				if((i+j+k) > sum && k >= 0)
					sum = i+j+k;
			}
		}
	}
	cout << sum;
}
