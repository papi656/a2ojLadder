#include <iostream>

#define lld long long int

using namespace std;

int main(){
	lld n, k;
	cin >> n >> k;
	lld arr[n];
	for(lld i = 0, val; i < n; i++){
		cin >> val;
		arr[i] = val;
	}
	lld sum = 0;
	for(lld i = 0; i < k; i++)
		sum += arr[i];
	lld pos = 1;
	lld psum = sum;
	for(lld i = 0; i < (n-k); i++){
		psum = psum - arr[i] + arr[i+k];
		if(psum < sum){
			pos = i+2;
			sum = psum;
		}
	}
	cout << pos;
}
