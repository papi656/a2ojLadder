#include <iostream>
#include <vector>
#include <map>

using namespace std;

int find(vector<vector<int>> &v, int val, int pos){ //& for vector pass by reference
	int cnt = 0;
	for(int i = 0; i < v.size(); i++){
		if(v[i][0] == val && i != pos){
			cnt++;
			v[i][0] = -1;
		}
	}
	return cnt;
}


int main(){
	int n;
	cin >> n;
	vector<vector<int>> l;
	for(int i = 0, a, b; i < n; i++){
		cin >> a >> b;
		l.push_back({a,b});
	}
	int ans = 0; // this stores number of bottles opened
	for(int i = 0; i < n; i++){
		int t = find(l, l[i][1], i);
		ans += t;
	}
	cout << n - ans << endl;
}


