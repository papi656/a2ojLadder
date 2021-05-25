#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	cin.ignore();
	string s;
	cin >> s;
	vector<int> left, right;
	for(int i = 0; i < s.size(); i++){
		if(i < n)
			left.push_back(s[i]);
		else
			right.push_back(s[i]);
	}
	sort(left.begin(), left.end());
	sort(right.begin(), right.end());
	bool great = true, less = true;
	for(int i = 0; i < n; i++){
		if(left[i] <= right[i]){
			great = false;
			break;
		}
	}
	for(int i = 0; i < n; i++){
		if(left[i] >= right[i]){
			less = false;
			break;
		}
	}
	if(!great && !less)
		cout << "NO";
	else
		cout << "YES";
}


