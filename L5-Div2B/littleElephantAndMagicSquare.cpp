#include <iostream>

using namespace std;

int main(){
	int arr[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> arr[i][j];
		}
	}
	int r1 = 0, r2 = 0, r3 = 0;
	for(int i = 0; i < 3; i++){
		r1 += arr[0][i];
		r2 += arr[1][i];
		r3 += arr[2][i];
	}
	arr[0][0] = (-r1 + r2 + r3) / 2;
	arr[1][1] = (-r2 + r3 + r1) / 2;
	arr[2][2] = (-r3 + r1 + r2) / 2;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(j == 0)
				cout << arr[i][j];
			else
				cout << " " << arr[i][j];
		}
		cout << "\n";
	}
}

