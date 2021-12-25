#include<bits/stdc++.h>
#define endl '\n'
#define space ' '
#define mod 1000000007
#define rep(i,s,e) for (int i = s; i < e; ++i)
#define rev(i,s,e) for (int i = s; i >= e; --i)

using namespace std;

/* https://www.codechef.com/LTIME103C/problems/RMNTREV/ */

void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
}

int main(){

	fastIO();
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		string out = s;

		bool is = true;
		// k times
		int r = k-1;
		int l = 0;
		rep(i, 0, k){
			char c;
			if(is){
				c = s[l];
				l++;
				is = false;
			}else{
				c = s[r];
				r--;
				is = true;
			}
			out[k-1-i] = c;
		}

		cout << out << endl;
	}


	return 0;
}