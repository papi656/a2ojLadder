#include <iostream>
#include <string>

using namespace std;

int main(){
	string a, b;
	cin >> a >> b;
	for(int i = 0; i < a.size(); i++){
		cout << ((a[i] - '0')^(b[i] - '0'));
	}
}

