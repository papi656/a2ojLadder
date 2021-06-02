#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

//vector<int> pos[5001];

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	pair<int, int> a[600000 + 100];
	for(int i = 1, val; i <= 2*n; i++){
		cin >> val;
		a[i].first = val;
		a[i].second = i;
	}
	sort(a, a+2*n+1);
	for(int i = 1; i <= 2*n; i += 2){
		if(a[i].first != a[i+1].first){
			cout << "-1\n";
			return 0;
		}
	}
	for(int i = 1; i <= 2*n; i += 2){
	//	cout << a[i].second << " " << a[i+1].second << endl;
		//using will give TLE on test 9
		printf("%d %d\n", a[i].second, a[i+1].second);
	}
}

