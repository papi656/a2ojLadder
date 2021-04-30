#include <iostream>
#include <vector>

using namespace std;

void digitCount(int digit, int dCount[]){
	int value = digit;
	while(value > 0){
		int d = value % 10;
		dCount[d]++;
		value = value / 10;
	}
}

int main(){
	int year;
	cin >> year;
	year += 1;
	int looper = 1;
	while(looper){
		int dCount[10];
		for(int i = 0; i < 10; i++)
			dCount[i] = 0;
		digitCount(year, dCount);
		int next = 0;
		for(auto x : dCount){
			if(x > 1){
				year += 1;
				next = 1;
			}
		}
		if(next == 0){
			looper = 0;
		}
	}
	cout << year;
}






