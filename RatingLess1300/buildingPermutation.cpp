#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define lld long long int

using namespace std;

int main(){
	lld n;
	cin >> n;
	vector<lld> input, desired;
	for(lld i = 1, val; i <= n; i++){
		cin >> val;
		input.push_back(val);
		desired.push_back(i);
	}
	sort(input.begin(), input.end());
	lld moves = 0;
	for(lld i = 0; i < n; i++){
		moves += abs(input[i] - desired[i]);
	}
	cout << moves;
}
