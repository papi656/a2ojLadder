#include <iostream>
#include <map>

#define lld long long int

using namespace std;

int main(){
	lld s, n;
	cin >> s >> n;
	map<int, int> duel;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		duel[x] += y;
	}
/*	for(auto x : duel)
		cout << "x = " << x.first << "; y = " << x.second << endl;*/
	map<int, int>::iterator it;
	it = duel.begin();
	bool won = true;
	while(it != duel.end()){
		if(it->first >= s){
			cout << "NO";
			won = false;
			break;
		}
		else{
			s += it->second;
			//cout << "Strength = " << s << endl;
		}
		it++;
	}
	if(won)
		cout << "YES";
}

	
