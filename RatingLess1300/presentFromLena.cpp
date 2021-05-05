#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i <= n; i++){
		for(int j = 0; j < 2*(n-i); j++)
			cout << " ";
		for(int k = 0; k <= i; k++){
			if(i == 0)
				cout << k;
			else
				cout << k << " ";
		}
		for(int l = i-1; l >= 0; l--){
			if(l == 0)
				cout << l;
			else
				cout << l << " ";
		}
		cout << "\n";
	}
	for(int i = n-1; i >= 0; i--){
		for(int j = 0; j < 2*(n-i); j++)
			cout << " ";
		for(int k = 0; k <= i; k++){
			if(i == 0)
				cout << k;
			else
				cout << k << " ";
		}
		for(int l = i-1; l >= 0; l--){
			if(l == 0)
				cout << l;
			else	
				cout << l << " ";
		}
		cout << "\n";
	}
}


