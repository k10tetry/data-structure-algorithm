#include<bits/stdc++.h>
#define endl '\n'
#define space ' '
#define rep(i,s,e) for (int i = s; i < e; ++i)
#define rev(i,s,e) for (int i = s; i >= e; --i)

using namespace std;

/* https://www.codechef.com/DEC21C/problems/VANDH */

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int h; // 0 1 0
		int v; // 1 0 1
		cin >> h >> v;
			
		string ans;
		if(h == v){
			rep(i, 0, h+1){
				ans.append("10");
			}
		}else if(v > h){
			rep(i, 0, h+1){
				ans.append("10");
			}
			rep(i, 0, v - h){
				ans.append("110");
			}

			ans.pop_back();
			ans.pop_back();
		}else{
			rep(i, 0, v+1){
				ans.append("01");
			}
			rep(i, 0, h - v){
				ans.append("001");
			}

			ans.pop_back();
			ans.pop_back();
		}

		cout << ans.length() << endl;
		cout << ans << endl;
	}

	return 0;
}