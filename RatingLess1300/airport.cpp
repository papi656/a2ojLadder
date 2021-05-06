#include <iostream>
#include <queue> //priority_queue
#include <algorithm> // sort

using namespace std;

int sum(int n){
	int ans = 0; 
	for(int i = 1; i <= n; i++)
		ans += i;
	return ans;
}

int main(){
	int n, m;
	cin >> n >> m;
	vector<int> low;
	priority_queue<int> high;
	for(int i = 0; i < m; i++){
		int val;
		cin >> val;
		low.push_back(val);
		high.push(val);
	}

	int maxZ = 0, minZ = 0;
	int num = n;
	while(num > 0){
		int val = high.top();
		maxZ += val;
		high.pop();
		high.push(val - 1);
		num -= 1;
	}
	sort(low.begin(), low.end());
	vector<int>::iterator it;
	it = low.begin();
	int val = *it;
	while(n){
		minZ += val;
		n -= 1;
		val -= 1;
		if(val == 0){
			it++;
			val = *it;
		}
	}
	cout << maxZ << " " << minZ;
}
