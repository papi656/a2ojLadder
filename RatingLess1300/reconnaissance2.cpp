#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[101];
	for(int i = 0; i < n; i++){
		int value;
		cin >> value;
		arr[i] = value;
	}
	int pdiff = 1200;
	int pos = 0;
	for(int i = 0; i < (n-1); i++){
		int diff = abs(arr[i] - arr[i+1]);
		if(diff < pdiff){
			pdiff = diff;
			pos = i;
		}
	}
	int diff = abs(arr[0] - arr[n-1]);
	if(diff < pdiff){
		cout << "1 " << n;
	}
	else
		cout << (pos+1) << " " << (pos+2);
}

