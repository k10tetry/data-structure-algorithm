#include <iostream>
using namespace std;

bool isPrime(int);

int main() {
	int t,n;
	cin>>t;
	
	while(t--){
	    cin>>n;
	    if(isPrime(n)){ cout << "yes\n";}
	    else {cout << "no\n";}
	}
	
	return 0;
}

bool isPrime(int n){
    if(n <= 1) return false;
    if(n != 2 && n % 2 == 0) return false;
    for(int i = 3; i * i <= n; i+=2){
        if(n % i == 0) return false;
    }
    return true;
}