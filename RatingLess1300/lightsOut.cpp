#include <iostream>

using namespace std;

int main(){
	int arr[4][4] = {0}, i , j;
	int result[5][5];
	for(i = 0; i < 5; i++) // for initializing result array
		for(j = 0; j < 5; j++)
			result[i][j] = 1;
	for(i = 1; i <= 3; i++){
		for(j = 1; j <= 3; j++){
			int value;
			cin >> value;
			if(value % 2 == 0)
				arr[i][j] = 0;
			else
				arr[i][j] = 1;
		}
	}
	for(i = 1; i < 4; i++){
		for(j = 1; j < 4; j++){
			if(arr[i][j] == 1){
				result[i][j] = !result[i][j];
				result[i-1][j] = !result[i-1][j];
				result[i+1][j] = !result[i+1][j];
				result[i][j+1] = !result[i][j+1];
				result[i][j-1] = !result[i][j-1];
			}
		}
	}
	for(i = 1; i < 4; i++){
		for(j = 1; j < 4; j++){
			cout << result[i][j];
		}
		cout << "\n";
	}
}


	

