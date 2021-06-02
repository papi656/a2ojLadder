#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	vector<int> a;
	for(int i = 0, val; i < n; i++){
		cin >> val;
		a.push_back(val);
	}
	set<int> s;
	vector<int> dis;
	for(int i = a.size() -1 ; i >= 0; i--){
		s.insert(a[i]);
		dis.push_back(s.size());
	}
	while(m--){
		int l;
		cin >> l;
		cout << dis[n-l] << endl;
	}
}

