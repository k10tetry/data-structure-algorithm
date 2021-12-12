#include<bits/stdc++.h>
#define endl '\n'
#define space ' '
#define rep(i,s,e) for (int i = s; i < e; ++i)
#define rev(i,s,e) for (int i = s; i >= e; --i)

using namespace std;

/* https://www.codechef.com/DEC21C/problems/ROPASCI */

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		char s[n], o[n];
		rep(i, 0, n){
			cin >> s[i];
		}


		char res;
		string result;

		rep(j, 0, n){
			res = s[j];
			rep(i, j + 1, n){
				if(res == 'S'){
					if(s[i] == 'S' || s[i] == 'P'){
						// cout << res << space;
					}else if(s[i] == 'R'){
						// cout << s[i] << space;
						res = s[i];
					}
				}else if(res == 'R'){
					if(s[i] == 'R' || s[i] == 'S'){
						// cout << res << space;
					}else if(s[i] == 'P'){
						// cout << s[i] << space;
						res = s[i];
					}
				}else{
					if(s[i] == 'P' || s[i] == 'R'){
						// cout << res << space;
					}else if(s[i] == 'S'){
						// cout << s[i] << space;
						res = s[i];
					}
				}
			}
			result.push_back(res);
		}

		cout << result << endl;
	}

	return 0;
}