#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;
	map<int, int> cnt;
	vector<string> seq;
	for(int i = 0; i < n; i++){
		int val;
		cin >> val;
		cnt[val]++;
	}
	bool possible = true;
	if(cnt[5] > 0 || cnt[7] > 0)
		possible = false;
	if(cnt[1] != n/3)
		possible = false;
	if(cnt[2] + cnt[3] != cnt[4] + cnt[6])
		possible = false;
	if(cnt[2] < cnt[4] || cnt[6] < cnt[3])
		possible = false;
	if(possible){
		int one = min(cnt[2], cnt[4]);
		for(int i = 0; i < one; i++){
			seq.push_back("1 2 4");
		//	cout << "1 2 4" << endl;
		}
		cnt[1] -= one;
		cnt[2] -= one;
		cnt[4] -= one;
		int two = cnt[2];
		for(int i = 0; i < two; i++){
			seq.push_back("1 2 6");
		//	cout << "1 2 6" << endl;
		}
		cnt[1] -= two;
		cnt[2] -= two;
		cnt[6] -= two;
		int three = cnt[1];
		for(int i = 0; i < three; i++){
			seq.push_back("1 3 6");
		}
		cnt[1] -= three;
		cnt[3] -= three;
		cnt[6] -= three;
		if(cnt[1] != 0 || cnt[2] != 0 || cnt[3] != 0 || cnt[4] != 0 || cnt[6] != 0)
			possible = false;
	}
	if(possible){
		vector<string>::iterator it;
		it = seq.begin();
		while(it != seq.end()){
			cout << *it << endl;
			it++;
		}
	}
	else
		cout << "-1";
}
		

	
