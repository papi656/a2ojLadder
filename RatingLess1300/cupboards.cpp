#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> left;
	vector<int> right;
	for(int i = 0; i < n; i++){
		int lval, rval;
		cin >> lval >> rval;
		left.push_back(lval);
		right.push_back(rval);
	}
	int l1cnt = 0, l0cnt = 0, r1cnt = 0, r0cnt = 0;
	for(auto x : left){
		if(x == 1)
			l1cnt++;
		else
			l0cnt++;
	}
	for(auto x : right){
		if(x == 1)
			r1cnt++;
		else
			r0cnt++;
	}
	int ans = 0;
	if(l1cnt < l0cnt)
		ans += l1cnt;
	else
		ans += l0cnt;
	if(r1cnt < r0cnt)
		ans += r1cnt;
	else
		ans += r0cnt;
	cout << ans;
}

