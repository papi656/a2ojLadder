#include <iostream>

#define lld long long int

using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n+1];
	for(int i = 1; i <= n; i++){
		int value;
		cin >> value;
		arr[value] = i;
	}

	int m;
	cin >> m;
	lld vas = 0, pet = 0;
	while(m--){
		int s;
		cin >> s;
		int pos = arr[s];
		vas += pos;
		pet += n - pos + 1;
	}
	cout << vas << " " << pet; 
	/* This is O(mn) solution - gets TLE
	int m;
	cin >> m;
	int vas = 0, pet = 0;
	while(m--){
		int s;
		cin >> s;
		int pos = 0;
		vector<int>::iterator it;
		for(it = arr.begin(); it != arr.end(); it++){
			pos++;
			if(*it == s)
				break;
		}
		vas += pos;
		pet += n - pos + 1;
	}
	cout << vas << " " << pet;*/
}


