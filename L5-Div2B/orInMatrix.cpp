#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int m, n;
	cin >> m >> n;
	int b[102][102], a[102][102];
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			cin >> b[i][j];
	int size = sizeof(a) / sizeof(a[0][0]);
	fill(&a[0][0], &a[0][0]+size, 1);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(!b[i][j]){
				for(int k = 0; k < m; k++)
					a[k][j] = 0;
				for(int k = 0; k < n; k++)
					a[i][k] = 0;
			}
		}
	}
	bool possible = true;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			int x = 0;
			for(int k = 0; k < n; k++)
				x |= a[i][k];
			for(int k = 0; k < m; k++)
				x |= a[k][j];
			if(x != b[i][j]){
				possible = false;
				break;
			}
		}
	}
	if(possible){
		cout << "YES\n";
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(j == 0)
					cout << a[i][j];
				else
					cout << " " << a[i][j];
			}
			cout << endl;
		}
	}
	else
		cout << "NO\n";
}




