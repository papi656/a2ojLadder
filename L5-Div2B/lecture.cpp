#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	map<string, string> dict;
	for(int i = 0; i < m; i++){
		string a, b;
		cin >> a >> b;
		dict[a] = b;
	}
	for(int i = 0; i < n; i++){
		string a;
		cin >> a;
		if(i != 0)
			cout << " ";
		if(a.size() > dict[a].size())
			cout << dict[a];
		else
			cout << a;
	}
}

