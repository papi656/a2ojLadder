#include <iostream>

#define lld long long int

using namespace std;

int main(){
	lld n; 
	cin >> n;
	int r[10], d[15] = {0};
	int i = 0;
	int dcnt = 0;
	while(n > 0){
		int digit = n % 10;
		r[i++] = digit;
		n = n / 10;
		dcnt++;
	}
	for(int j = 0; j < dcnt; j++){
		d[dcnt - j - 1] = r[j];
	}
	int j = 0;
	bool magic = true;
	while(j < dcnt){
		if(d[j] == 1 && d[j+1] == 4 && d[j+2] == 4)
			j += 3;
		else if(d[j] == 1 && d[j+1] == 4)
			j += 2;
		else if(d[j] == 1)
			j += 1;
		else{
			magic = false;
			break;
		}
	}
	if(magic)
		cout << "YES";
	else
		cout << "NO";
}


/*
   Better solution with strings which can be applied with arbitrary length numbers.
   Three conditions to be checked:
   - number should consist only of digits 1 and 4
   - number should begin with 1
   - number should not have 3 consecutive 4 (i.e. 444)


bool is_magical(string number) {
	for (int i = 0; i < (int)number.size(); i++)
		if (number[i] != '1' && number[i] != '4')
			return false;

	if (number[0] == '4')
		return false;

	//when find return false it is equal to string.npos

	if (number.find("444") != number.npos) 
		return false;
	
	return true;
}

*/
