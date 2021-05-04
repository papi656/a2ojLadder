#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int k;
	cin >> k;
	vector<int> v;
	for(int i = 0; i < 12; i++){
		int val; 
		cin >> val;
		v.push_back(val);
	}
	sort(v.begin(), v.end());
	vector<int>::reverse_iterator rit;
	rit = v.rbegin();
	int months = 0;
	int h = 0;
	while(rit != v.rend()){
		if(h >= k)
			break;
		else{
			h += *rit;
			months++;
		}
		rit++;
	}
	if(h < k)
		cout << "-1";
	else	
		cout << months;
}


