#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int capacity = 0, maxcapacity;
	int a, b;
	cin >> a >> b;
	capacity = b;
	maxcapacity = capacity;
	n -= 1;
	while(n--){
		cin >> a >> b;
		int change = b - a;
		capacity = capacity + change;
		if(maxcapacity < capacity)
			maxcapacity = capacity;
	}
	cout << maxcapacity;
}

