#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a = 0, b = 0;
	for(int i = 0, val; i < n; i++){
		cin >> val;
		if(val == 100)
			a++;
		else
			b++;
	}
	int sum = a*100 + b*200;
	int half = sum / 2;
	if(sum % 200 != 0)
		cout << "NO";
	else{
		bool possible = false;
		for(int i = 0; i <= b; i++){
			if(200*i <= half && half - 200*i <= a*100)
				possible = true;
		}
		if(possible)
			cout << "YES";
		else
			cout << "NO";
	}
}
