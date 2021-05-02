#include <iostream>
#include <cmath>


using namespace std;

int main(){
	int n;
	int arr[7];
	cin >> n;
	int sum = 0;
	for(int i = 0; i < 7; i++){
		int value;
		cin >> value;
		arr[i] = value;
		sum += value;
	}
	int mul = ceil((float)(n - sum) / sum);
	int left = n - (mul * sum);
	for(int i = 0; i < 7; i++){
		left -= arr[i];
		if(left <= 0){
			cout << (i+1);
			break;
		}
	}
}

