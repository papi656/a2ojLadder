#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int cnt = 0;
	while(n--){
		int a, b, c;
		int arr[2] = {0};
		cin >> a >> b >> c;
		arr[a]++;
		arr[b]++;
		arr[c]++;
		if(arr[1] >= 2)
			cnt++;
	}
	cout << cnt;
}


