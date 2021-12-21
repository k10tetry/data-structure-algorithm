#include<bits/stdc++.h>
#define endl '\n'
#define space ' '
#define mod 1000000007
#define rep(i,s,e) for (int i = s; i < e; ++i)
#define rev(i,s,e) for (int i = s; i >= e; --i)

/* https://www.codechef.com/COOK136C/problems/MUSICHAIR */

using namespace std;

void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
}

int main(){

	fastIO();
	int t;
	cin >> t;
	while(t--){
		int n, k = 0;
		cin >> n;

		n--;

		for(int i = 1; i*i <= n; i++){
			if(n%i == 0){
				k++;
				if(i * i != n) k++;
			}
		}
		cout << k << endl;
	}

	return 0;
}