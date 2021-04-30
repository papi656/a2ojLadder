#include <iostream>
#include <string>

using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	string seq;
	cin >> seq;
	for(int i = 0; i < t; i++){
		for(int j = 0; j < n-1; j++){
			if(seq[j] == 'B' && seq[j+1] == 'G'){
				seq[j] = 'G';
				seq[j+1] = 'B';
				j++;
			}
		}
	}
	cout << seq;
}

