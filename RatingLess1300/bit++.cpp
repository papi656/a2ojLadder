#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;
	int x = 0;
	while(n--){
		string a;
		cin >> a;
		if(a[0] == '+' || a[2] == '+')
			x++;
		if(a[0] == '-' || a[2] == '-')
			x--;
	}
	cout << x;
}


