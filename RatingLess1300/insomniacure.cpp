#include <iostream>

using namespace std;

int lcm(int a, int b){
	int aa = a, bb = b;
	while(b > 0){
		int temp = a;
		a = b;
		b = temp % b;
	}
	int ans;
	ans = (aa * bb) / a;
	return ans;
}
	

int main(){
	int k,l,m,n,d;
	cin >> k >> l >> m >> n >> d;

	//O(d) solution
/*	int arr[d+1];
	for(int i = 0; i <= d; i++){
	       arr[i] = 1;
	}
	int kloc = k, lloc = l, mloc = m, nloc = n;
	for(int i = 1; i <= d; i++){
		if(kloc <= d){
			arr[kloc] = 0;
			kloc += k;
		}
		if(lloc <= d){
			arr[lloc] = 0;
			lloc += l;
		}
		if(mloc <= d){
			arr[mloc] = 0;
			mloc += m;
		}
		if(nloc <= d){
			arr[nloc] = 0;
			nloc += n;
		}
	}
	int count = 0;
	for(int i = 1; i <= d; i++){
		if(arr[i] == 0)
			count++;
	}
	cout << count;*/

	//O(1) solution - exclusion-inclusion principle
	int two1 = lcm(k, l);
	int two2 = lcm(k, m);
	int two3 = lcm(k, n);
	int two4 = lcm(l, m);
	int two5 = lcm(l, n);
	int two6 = lcm(m, n);
	int three1 = lcm(two1, m);
	int three2 = lcm(two1, n);
	int three3 = lcm(two2, n);
	int three4 = lcm(two4, n);
	int four1 = lcm(two1, two6);
	int count = (d/k + d/l + d/m + d/n) - (d/two1 + d/two2 + d/two3 + d/two4 + d/two5 + d/two6) + (d/three1 + d/three2 + d/three4 + d/three3) - (d/four1);
	cout << count;
}



