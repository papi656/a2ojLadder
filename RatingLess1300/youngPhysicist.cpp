#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int xsum = 0, ysum = 0, zsum = 0;
	for(int i = 0; i < n; i++){
		int corX, corY, corZ;
		cin >> corX >> corY >> corZ;
		xsum += corX;
		ysum += corY;
		zsum += corZ;
	}
	if(xsum == 0 && ysum == 0 && zsum == 0)
		cout << "YES";
	else
		cout << "NO";
}

