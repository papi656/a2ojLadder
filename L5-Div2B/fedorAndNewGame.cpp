#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define lld long long int

int ans[30];

using namespace std;

void bin(lld num){
	int i = 0;
	for(int i = 0; i < 25; i++)
		ans[i] = 0;
	while(num > 0){
		ans[i++] = num % 2;
		num /= 2;
	}
}


int main(){
	int n, m, k;
	cin >> n >> m >> k;
	vector<lld> x;
	for(lld i = 0, val; i < m; i++){
		cin >> val;
		x.push_back(val);
	}
	lld fx; 
	cin >> fx;
        bin(fx);
	int a[30];
	for(int i = 0; i < 30; i++)
		a[i] = ans[i];
	lld fcount = 0;
	for(int i = 0; i < m; i++){
	        bin(x[i]);
		int b[30];
		for(int kk = 0; kk < 30; kk++)
			b[kk] = ans[kk];
		int diff = 0;
		for(int j = 0; j < 21; j++){
			if(a[j] != b[j])
				diff++;
		}
		if(diff <= k)
			fcount++;
	}
	cout << fcount << endl;
}

