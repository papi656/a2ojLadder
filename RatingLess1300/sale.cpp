#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	vector<int> a;
	for(int i = 0; i < n; i++){
		int v;
		cin >> v;
		a.push_back(v);
	}
	sort(a.begin(), a.end());
	int loc = 0;
	int money = 0;
	while(loc < m){
		int cost = a.at(loc);
		if(cost < 1)
			money += cost;
		loc++;
	}
	money = abs(money);
	cout << money;
}



