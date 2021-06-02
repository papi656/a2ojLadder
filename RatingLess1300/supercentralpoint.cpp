#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
	int n;
	int a[200][2];
//	map<int, vector<int>> xy, yx;
	cin >> n;
	for(int i = 0, x, y; i < n; i++){
		cin >> x >> y;
		a[i][0] = x;
		a[i][1] = y;
//		xy[x] = y;
//		yx[y] = x;
	}
	int count = 0;
	for(int i = 0; i < n; i++){
		int x, y;
		x = a[i][0];
		y = a[i][1];
		int l = 0, r = 0, t = 0, b = 0;
		for(int j = 0; j < n; j++){
			if(a[j][1] == y && a[j][0] < x)
				l = 1;
		}
		for(int j = 0; j < n; j++){
			if(a[j][1] == y && a[j][0] > x)
				r = 1;
		}
		for(int j = 0; j < n; j++){
			if(a[j][0] == x && a[j][1] > y)
				t = 1;
		}
		for(int j = 0; j < n; j++){
			if(a[j][0] == x && a[j][1] < y)
				b = 1;
		}
		if(l+r+t+b == 4)
			count++;
	}
	cout << count << endl;
}

		

