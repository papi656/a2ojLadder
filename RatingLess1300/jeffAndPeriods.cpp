#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<vector<int>> a(100001);
	vector<pair<int, int>> ans;
	for(int i = 0; i < n; i++){
		int val;
		cin >> val;
		a[val].push_back(i);
	}
	for(int i = 0; i < a.size(); i++){
		if(a[i].size() == 1){
			ans.push_back(make_pair(i, 0));
		}
		else if(a[i].size() > 1){
			sort(a[i].begin(), a[i].end());
			int diff = a[i][1] - a[i][0];
			bool fill = true;
			for(int j = 0; j < a[i].size() -1; j++){
				if((a[i][j+1] - a[i][j]) != diff){
					fill = false;
					break;
				}
			}
			if(fill)
				ans.push_back(make_pair(i, diff));
		}

	}
	cout << ans.size() << endl;
	for(int i = 0; i < ans.size(); i++){
		cout << ans[i].first << " " << ans[i].second << endl;
	}

}


