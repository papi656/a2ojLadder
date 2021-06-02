#include <iostream>
#include <vector>

using namespace std;

int main(){      //O(n^3)
	int n;
	cin >> n;
	vector<int> a;
	for(int k = 0, val; k < n; k++){
		cin >> val;
		a.push_back(val);
	}
	int l = 0, r = 0, rzero = 0, maxdiff = 0, zerocnt = 0, onecnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			zerocnt = 0;
			onecnt = 0;
			for(int k = i; k <= j; k++){
				if(a[k] == 0)
					zerocnt++;
				if(a[k] == 1)
					onecnt++;
			}
			int diff = zerocnt - onecnt;
			if(diff > maxdiff){
				maxdiff = diff;
				l = i;
				r = j;
				rzero = zerocnt;
			}
		}
	}
	int maxones = 0;
	for(int i = 0; i < l; i++){
		if(a[i] == 1)
			maxones++;
	}
	for(int i = r+1; i < n; i++){
		if(a[i] == 1)
			maxones++;
	}
	maxones += rzero;
	cout << maxones;
}




/*int main(){
	int n;
	cin >> n;
	vector<int> a;
	for(int k = 0, val; k < n; k++){
		cin >> val;
		a.push_back(val);
	}
	int i = -1, j, zerocnt = 0, onecnt = 0, diff, maxdiff = 0;
	bool firstzero = false;
	for(int k = 0; k < n; k++){
		if(a[k] == 0){
			i = k;
			break;
		}
	}
	for(int k = i; k < n; k++){
			if(a[k] == 0)
				zerocnt++;
			if(a[k] == 1)
				onecnt++;
			diff = zerocnt - onecnt;
			if(diff > maxdiff){
				maxdiff = diff;
				j = k;
			}
			if(diff == 0){
				i = k+1;
				j = k+1;
				zerocnt = 0;
				onecnt = 0;
				maxdiff = 0;
			}
	}
	cout << i << " " << j << endl;
	cout << zerocnt << " " << onecnt << endl;
	int maxones = 0;
	for(int k = 0; k < i; k++){
		if(a[k] == 1)
			maxones += 1;
	}
	for(int k = j+1; k < n; k++){
		if(a[k] == 1)
			maxones += 1;
	}
	maxones = maxones + zerocnt;
	cout << maxones;
}
*/




