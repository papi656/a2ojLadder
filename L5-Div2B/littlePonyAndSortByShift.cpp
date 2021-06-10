#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	int p = 0, pos = -1;
	for(int i = 0, val; i < n; i++){
		cin >> val;
		arr[i] = val;
		if(p > val && pos == -1)
			pos = i;
		p = val;
	}
	bool possible = true;
	int maxhalf = 0;
	if(pos != -1){
		int pval = arr[pos];
		maxhalf = pval;
		for(int i = pos+1; i < n; i++){
			if(pval > arr[i]){
				possible = false;
				//break;
			}
			maxhalf = max(maxhalf, arr[i]);
		}
	}

	if(possible){
		if(maxhalf <= arr[0] && pos != -1 && maxhalf == arr[n-1])
			cout << n-pos << endl;
		else if(pos == -1)
			cout << "0\n";
		else
			cout << "-1" << endl;
	}
	else
		cout << "-1\n";
}


