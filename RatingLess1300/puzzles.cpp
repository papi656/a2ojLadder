#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	vector<int> f;
	for(int i = 0; i < m; i++){
		int val;
		cin >> val;
		f.push_back(val);
	}
	sort(f.begin(), f.end());
	vector<int>::reverse_iterator rit;
	rit = f.rbegin();
	int diff = 1100;
	while(1){
		if((rit + n - 1) == f.rend())
			break;
		int dis = *rit - *(rit + (n - 1));
		if(dis < diff)
		       diff = dis;
		rit++;
	}
	cout << diff;
}


