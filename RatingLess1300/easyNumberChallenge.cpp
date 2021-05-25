#include <iostream>

#define lld long long int
#define modul 1073741824 // modulo not needed

int arr[1000005];

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	long long int sum = 0;
	for(lld i = 1; i <= (a*b*c); i++){
		for(lld j = i; j <= a*b*c; j+=i)
			arr[j]++;
	}
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= b; j++){
			for(int k = 1; k <= c; k++){
				sum += arr[i*j*k];
			}
		}
	}
	cout << sum;
}

