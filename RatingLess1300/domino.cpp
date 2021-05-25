#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> diff;
	int sumx = 0, sumy = 0;
	for(int i = 0, x, y; i < n; i++){
		cin >> x >> y;
		sumx += x;
		sumy += y;
		diff.push_back(abs(x-y));
	}
	if(sumx % 2 == 0 && sumy % 2 == 0){
		cout << "0";
		return 0;
	}
	if((sumx % 2 == 0 && sumy % 2 != 0) || (sumx % 2 != 0 && sumy % 2 == 0)){
		cout << "-1";
		return 0;
	}
	bool possible = false;
	for(int i = 0; i < diff.size(); i++){
		if(diff[i] % 2 != 0){
			possible = true;
			break;
		}
	}
	if(possible)
		cout << "1";
	else
		cout << "-1";
}

