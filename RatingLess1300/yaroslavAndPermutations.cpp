#include <iostream>
#include <map>

using namespace std;

int main(){
	int n;
	cin >> n;
	map<int, int> cnt;
	for(int i = 0, val; i < n; i++){
		cin >> val;
		cnt[val]++;
	}
	map<int,int>::iterator it;
	it = cnt.begin();
	bool possible = true;
	while(it != cnt.end()){
		if(it->second > (n+1)/2)
			possible = false;
		it++;
	}
	if(possible)
		cout << "YES";
	else
		cout << "NO";
}


