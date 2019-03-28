#include <iostream>

using namespace std;
void digit_sort(int arr[],int n,int ex) {
    int countt[10];
    for(int i = 0 ; i < 10 ; i++) {
        countt[i] = 0;
    }
    int out[n];
    for(int i = 0 ; i < n ; i++) {
        countt[(arr[i]/ex) %10]++;
    }
    for(int i = 1 ; i < 10 ; i++ ) {
        countt[i] += countt[i-1];
    }
    for(int i = n - 1 ; i >=0 ; i--) {
        out[countt[arr[i]/ex % 10] - 1 ] = arr[i];
        countt[(arr[i]/ex) %10]--;
    }
    for(int i = 0 ; i< n ; i++) {
        arr[i] =  out[i];
    }
}
int maxx(int arr[],int n) {
    int maxxx = arr[0] ;
    for(int i = 1 ; i < n ; i++) {
        if(maxxx < arr[i]) {
            maxxx = arr[i];
        }
    }
    return  maxxx;
}
void radix_sort(int arr[],int n) {
    int mx = maxx(arr,n);
    for(int ex =  1 ; mx / ex > 0 ; ex *= 10) {
        digit_sort(arr,n,ex);
    }
}

int main() {
    int arr[8] = {20,80,90,40,0,30,50,60};
    radix_sort(arr,8);
    for(int i = 0 ; i < 8 ; i++) {
        cout<<arr[i]<<endl;
    }
    return 0;
}
