#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	vector<string> board;
	for(int i = 0; i < n; i++){
		string row;
		cin >> row;
		board.push_back(row);
	}
	vector<string>::iterator it;
	it = board.begin();
	for(int i = 0; i < n; i++){
		string row = *it;
		if(i % 2 == 0){
			for(int j = 0; j < row.size(); j++){
				if(row[j] == '.'){
					if(j % 2 == 0)
						cout << "W";
					else
						cout << "B";
				}
				else
					cout << row[j];
			}
		}
		else{
			for(int j = 0; j < row.size(); j++){
				if(row[j] == '.'){
					if(j % 2 == 0)
						cout << "B";
					else
						cout << "W";
				}
				else
					cout << row[j];
			}
		}
		it++;
		cout << "\n";
	}
}



