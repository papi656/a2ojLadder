#include <iostream>
#include <string>

#define lld long long int

using namespace std;

int main(){
	lld t, sx, sy, ex, ey;
	cin >> t >> sx >> sy >> ex >> ey;
	cin.ignore();
	string s;
	cin >> s;
	lld time = 0, xdis = sx - ex, ydis = sy - ey;
	string::iterator it;
	it = s.begin();
	bool possible = false;
	while(it != s.end()){
		if(*it == 'E'){
			if(xdis < 0)
				xdis += 1;
		}
		else if(*it == 'W'){
			if(xdis > 0)
				xdis -= 1;
		}
		else if(*it == 'N'){
			if(ydis < 0)
				ydis += 1;
		}
		else{
			if(ydis > 0)
				ydis -= 1;
		}
		time++;
		if(time > t)
			break;
		if(xdis == 0 && ydis == 0){
			possible = true;
			break;
		}
		it++;
	}
	if(possible)
		cout << time;
	else
		cout << "-1";
}



