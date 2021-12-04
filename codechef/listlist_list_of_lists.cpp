#include<bits/stdc++.h>
#define endl '\n'
#define space ' '
#define rep(i,s,e) for (int i = s; i < e; ++i)

using namespace std;

/* https://www.codechef.com/DEC21C/problems/LISTLIST */

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin >> t;
	while(t--){

		int n, num, mx = 0;
		unordered_map<int,int> m;

		cin >> n;

		rep(i,0,n){
			cin >> num;
			m[num]++;
		}

		for (pair<int,int> p : m){
			mx = max(mx,p.second);
		}

		if(mx == n){
			cout << 0 << endl;
		}else if(mx > 1){
			cout << n - mx + 1 << endl;
		}else{
			cout << -1 << endl;
		}

	}

	return 0;
}