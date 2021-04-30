#include <iostream>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int arr[51];
	for(int i = 0; i <= 50; i++)
	       arr[i] = i;
	for(int i = 2; i*i <= m; i++){ 
		if(arr[i] != -1){
			for(int j = 2*i; j <=m; j=j+i){
				arr[j] = -1;
			}
		}
	}
	int nexttoN;
	for(int i = n+1; i <= m; i++){
		if(arr[i] != -1){
			nexttoN = arr[i];
			break;
		}
	}
	if(m == nexttoN)
		cout << "YES";
	else
		cout << "NO";
}



