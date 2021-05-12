#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	vector<int> seq;
	for(int i = 0; i < n; i++){
		int val;
		cin >> val;
		seq.push_back(val);
	}
	bool possible = true;
	vector<int>::iterator it;
	it = seq.begin() + k - 1;
	int kthEle = *it;
	while(it != seq.end()){
		if(kthEle != *it)
			possible = false;
		it++;
	}
	it = seq.begin();
	int pos = -1, i = 0;
	while(it != (seq.begin() + k - 1)){
		if(kthEle != *it)
			pos = i;
		i++;
		it++;
	}
	if(possible)
		cout << pos + 1;
	else
		cout << "-1";
}


