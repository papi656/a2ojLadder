#include <iostream>
#include <vector>
#include <utility> //pair
#include <algorithm>

using namespace std;

bool myCompare(pair<int, int> a, pair<int, int> b){ //custom comapre function
	if(a.first < b.first)
		return false;
	else if(a.first > b.first)
		return true;
	else{
		if(a.second < b.second)
			return true;
		else
			return false;
	}
}


int main(){
	int n, k;
	cin >> n >> k;
	vector<pair<int,int>> v;
	for(int i = 0, a, b; i < n; i++){
		cin >> a >> b;
		pair<int, int> tmp;
		tmp.first = a;
		tmp.second = b;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), myCompare);
	int prob = v[k-1].first;
	int time = v[k-1].second;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(prob == v[i].first && time == v[i].second)
			cnt++;
	}
	cout << cnt;
}


	
