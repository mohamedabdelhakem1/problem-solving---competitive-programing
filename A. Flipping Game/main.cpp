#include <iostream>

using namespace std;
int count_zeros(int arr[], int l, int len, int n) {
    int counter = 0;
    for(int i = 0 ; i < l ; i++ ) {
        if(arr[i] == 1) {
            counter++;
        }
    }
    for(int  i = l ; i < l+len; i++ ) {
        if(arr[i] == 0) {
            counter++;
        }
    }
    for(int i =  l+len ; i < n; i++ ) {
        if(arr[i] == 1) {
            counter++;
        }
    }
    return counter;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++) {
        cin>>arr[i];
    }
    int maxx = 0 ;
    int count_ones = 0;
    int count_zero = 0;
    for(int i = 0 ; i < n ; i++) {
        if(arr[i]) {
            count_ones++;
        }
        if(!arr[i]) {
            count_zero++;
        }
        for(int j = i+1 ; j < n ; j++) {
            int nnn = count_zeros(arr,i,j-i+1,n);
            if(nnn > maxx) {
                maxx = nnn;

            }
        }
    }
    if (count_zero == n ) {
        cout<<n;
    } else if(count_ones == n) {
        cout<<n-1;
    } else {
        cout<<maxx;
    }



    return 0;
}
