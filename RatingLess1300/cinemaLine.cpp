#include <iostream>
#include <map>

using namespace std;

int main(){
	int n;
	cin >> n;
	map<int, int> cnt;
	bool possible = true;
	for(int i = 0, val; i < n; i++){
		cin >> val;
		cnt[val]++;
		if(val == 50){
			cnt[25]--;
			if(cnt[25] < 0){
				possible = false;
				break;
			}
		}
		if(val == 100){
			if(cnt[50] > 0 && cnt[25] > 0){
				cnt[50]--;
				cnt[25]--;
			}
			else if(cnt[25] > 2){
				cnt[25] -= 3;
			}
			else{
				possible = false;
				break;
			}
		}
	}
	if(possible)
		cout << "YES";
	else
		cout << "NO";
}

