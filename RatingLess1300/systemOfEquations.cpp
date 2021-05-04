#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int pairs = 0;
	for(int i = 0; i <= sqrt(n); i++){
		for(int j = 0; j <= sqrt(m); j++){
			if((i*i + j) == n && (i + j*j) == m)
				pairs++;
		}
	}
	cout << pairs;
}
