#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
	int n, s, t;
	cin >> n >> s >> t;
	int p[n];
	for(int i = 0; i < n; i++){
		cin >> p[i];
		--p[i];
	}
	--s;
	--t;
	int steps = 0;
	bool possible = true;
	while(s != t){
		steps++;
		s = p[s];
		if(steps > n){
			possible = false;
			break;
		}
	}
	if(possible)
		cout << steps << "\n";
	else
		cout << "-1\n";
}



	//Below is very roundabout, lengthy, non-CP-esque solution

/*	vector<int> p;
	for(int i = 0, val; i < n; i++){
		cin >> val;
		p.push_back(val);
	}
	vector<int> pos;
	set<int> k;
	set<int>::iterator it;
	k.insert(s);
	it = k.end();
	pos.push_back(s);
	while(it == k.end()){
		int tnf = p[s-1];
		it = k.find(tnf);
		k.insert(tnf);
		pos.push_back(tnf);
		s = tnf;
	}
	it = k.find(t);
	if(it != k.end()){
		for(int i = 0; i < pos.size(); i++){
			if(pos[i] == t){
				cout << i << endl;
				break;
			}
		}
	}
	else
		cout << "-1\n";
}
*/
