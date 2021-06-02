#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
	int n; 
	cin >> n;
	int arr[25*60];
	memset(arr, 0, sizeof(arr));
	for(int i = 0, h, m; i < n; i++){
		cin >> h >> m;
		int hash = h*60 + m;
		arr[hash]++;
	}
//	cout << arr[13] << endl;
	int size = sizeof(arr)/sizeof(arr[0]);
	cout << *max_element(arr,arr+size);
//	int a[] = {1, 2, 4, 2};
//	cout << *max_element(a, a+4);
}

