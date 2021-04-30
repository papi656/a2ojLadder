#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int arr[5][5];
	int row1, col1; // to store row and column of 1
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			int value;
			cin >> value;
			arr[i][j] = value;
			if(value == 1){
				row1 = i+1;
				col1 = j+1;
			}
		}
	}
	int moves;
	moves = abs(row1 - 3) + abs(col1 - 3);
	cout << moves;
}

