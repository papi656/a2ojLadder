#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
	int n; 
	cin >> n;
	map<int, vector<int>> time;
	for(int i = 0, h, m; i < n; i++){
		cin >> h >> m;
		time[h].push_back(m);
	}
	int cneed = 0;
	for(int i = 0; i < 24; i++){
		int need = 0;
		if(time[i].size() != 0){
			int rep = time[i][0];
			int tmpneed = 0;
			for(int j = 1; j < time[i].size(); j++){
				if(time[i][j] == rep){
					tmpneed++;
				}
				else{
					rep = time[i][j];
					if(need < tmpneed)
						need = tmpneed;
					tmpneed = 0;
				}
			}
			if(need < tmpneed)
				need = tmpneed;
		}
		if(cneed < need)
			cneed = need;
	}
	cout << cneed + 1;
}

					

