#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int arr[6][6];
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			int val;
			cin >> val;
			arr[i][j] = val;
		}
	}
	vector<int> line;
	for(int i = 1; i <= 5; i++)
		line.push_back(i);
	int happiness = 0;
	do{
		int interimH = 0;
		interimH += 2 * (arr[line[4]-1][line[3]-1] + arr[line[3]-1][line[4]-1]);
		interimH += 2 * (arr[line[2]-1][line[3]-1] + arr[line[3]-1][line[2]-1]);
		interimH += arr[line[1]-1][line[2]-1] + arr[line[2]-1][line[1]-1];
		interimH += arr[line[0]-1][line[1]-1] + arr[line[1]-1][line[0]-1];
		if(interimH > happiness)
			happiness = interimH;
	}while(next_permutation(line.begin(), line.end()));
	cout << happiness;
}
		
		


