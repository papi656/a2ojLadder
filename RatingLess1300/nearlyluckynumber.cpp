#include <iostream>

#define lld long long int

using namespace std;

int main(){
	lld num, count = 0;
	cin >> num;
	while(num > 0){
		int digit = num % 10;
		if(digit == 4 || digit == 7)
			count++;
		num /= 10;
	}
/*	lld arr[10] = {0};
	int lucky = 0;
	if(count)
		lucky = 1;
	while(count > 0){
		int digit = count % 10;
		arr[digit]++;
		count /= 10;
	}
	for(int i = 0; i < 10; i++){
	//	cout << i << " - " << arr[i] << endl;
		if(i != 4 && i != 7){
			if(arr[i] > 0)
				lucky = 0;
		}
	}
	if(lucky)
		cout << "YES";
	else
		cout << "NO";*/

	//Seeing if simplistic approach was required for the exam
	if(count == 4 || count == 7)
		cout << "YES";
	else
		cout << "NO";
}



