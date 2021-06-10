#include <iostream>
#include <vector>
#include <algorithm>

#define lld long long int 

using namespace std;

int main(){
	lld n;
	cin >> n;
	vector<lld> a;
	for(lld i = 0, val; i < n; i++){
		cin >> val;
		a.push_back(val);
	}
	lld l, r;
	lld pval = a[0];
	bool lfound = false, rfound = false;
	bool possible = true;
	for(lld i = 1; i < n; i++){
		if(!lfound){
		if(a[i] < pval){
//			cout << pval << " " << a[i] << endl;
			l = (i-1) + 1;
			lfound = true;
			pval = a[i];
		//	continue;
		}
		else
			pval = a[i];
		}
		else if(lfound && !rfound){
//			cout << pval << " " << a[i] << endl;
			if(a[i] > pval){
//				cout << "IN";
				r = (i-1) + 1;
				rfound = true;
				pval = a[i];
		//		continue;
			}
			else{
				pval = a[i];
			//	cout << i << " ";
			}
		}
		else if(lfound && rfound){
			if(pval > a[i]){
				possible = false;
				break;
			}
			else
				pval = a[i];
		}
	}
//	cout << "l: " << l << " r:" << r << endl;
/*	sort(a.begin() + l - 1, a.end() - n + r);
	for(auto x : a){
		cout << x << " ";
	}
	cout << endl;*/
	if(!lfound)
		l = 1;
	if(!rfound && lfound)
		r = n;
	if(!rfound && !lfound)
		r = 1;
	sort(a.begin()+ l - 1, a.end() - n + r);
	lld pval1 = a[0];
	for(lld i = 1; i < n; i++){
		if(a[i] < pval1){
			possible = false;
			break;
		}
		pval1 = a[i];
	}
	if(possible){
		cout << "yes" << endl;
		cout << l << " " << r << endl;
	}
	else
		cout << "no" << endl;
}
