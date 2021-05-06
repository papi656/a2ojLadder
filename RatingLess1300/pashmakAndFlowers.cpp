#include <iostream>
#include <cmath>
#include <algorithm>

#define lld long long int

using namespace std;

int main(){
	lld n;
	cin >> n;
	lld arr[n];
	for(int i = 0; i < n; i++){
		int val;
		cin >> val;
		arr[i] = val;
	}
	lld maxDiff = 0;
	sort(arr, arr+n);
	maxDiff = arr[n-1] - arr[0];
	lld mincnt = 0, maxcnt = 0;
	lld i = 0;
	while(i < n){
		if(arr[i] == arr[0])
			mincnt++;
		else
			break;
		i++;
	}
	i = n-1;
	while(i >= 0){
		if(arr[i] == arr[n-1])
			maxcnt++;
		else
			break;
		i--;
	}
	lld pairs;
	if(arr[0] == arr[n-1])
		pairs = ((n)*(n-1)) / 2;
	else
		pairs = maxcnt * mincnt;
	cout << maxDiff << " " << pairs;
}



