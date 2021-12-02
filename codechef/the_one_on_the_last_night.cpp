#include<bits/stdc++.h>
using namespace std;

/* https://www.codechef.com/problems/S06E06 */

/* Successfully build the logic, but forgot to set the condition in the first attempt */

int main(){

	int t;
	cin >> t;
	while(t--){
		int n, k;
		vector<int> v;
		cin >> n >> k;

		while(n){
			v.push_back(n%10);
			n /= 10;
		}

		while(k--){
			sort(v.begin(),v.end());
			if(v[0] != 9){
			    v[0]++;
			}
		}

		int res = 1;
		for(int num : v){
			res *= num;
		}

		cout << res << '\n';
	}

	return 0;
}