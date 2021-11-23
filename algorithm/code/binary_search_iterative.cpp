#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int low, int high, int num);

int main(){

    int t;
    cin >> t;
    while (t--){
        int n, num;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        cin >> num;

        cout << binarySearch(a, 0, n - 1, num);
    }

    return 0;
}

int binarySearch(int a[], int low, int high, int num){
    int mid;
    while (low <= high){
        // This will overflow if array is of large size
        // mid = (low + high) / 2;
        mid = low + (high - low) / 2;
        if (a[mid] == num){
            return mid;
        } else if (a[mid] < num){
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
    return -1;
}