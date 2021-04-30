#include <iostream>

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
	int maxloc = 0, minloc = 0, max = arr[0], min = arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] > max){
			max = arr[i];
			maxloc = i;
		}
		if(arr[i] <= min){
			min = arr[i];
			minloc = i;
		}
	}
	int swaps;
	if(maxloc > minloc){
		swaps = maxloc + (n - minloc - 1) - 1;
	}
	else 
		swaps = maxloc + (n - minloc - 1);
	cout << swaps;
}



