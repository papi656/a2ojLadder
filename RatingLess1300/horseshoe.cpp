#include <iostream>
#include <map>

#define lld long long int

using namespace std;

int main(){
	lld s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	map <int, int> track;
	track[s1]++;
	track[s2]++;
	track[s3]++;
	track[s4]++;
	int required = 0;
	for(auto x : track){
			required += x.second - 1;
	}
	cout << required;
}


