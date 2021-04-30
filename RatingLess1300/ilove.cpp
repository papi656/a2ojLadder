#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int value;
	cin >> value;
	int max = value, min = value;
	n -= 1;
	int amazingCount = 0;
	while(n--){
		int value;
		cin >> value;
		if(value > max){
			max = value;
			amazingCount++;
		}
		if(value < min){
			min = value;
			amazingCount++;
		}
	}
	cout << amazingCount;
}

