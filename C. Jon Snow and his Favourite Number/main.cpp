#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

#define for(i,x,n,inc)  for(ll i = x ; i < n; i = i + inc)
int main() {
    ll n,k,x;

    cin>>n>>k>>x;
    ll arr[n];
    ll i ;
    for(i,0,n,1) {
        scanf("%lld",&arr[i]);
    }
    for(i,0,k,1) {
        sort(arr,arr+n);
        for (j,0,n,2) {
            arr[j] = arr[j]^ x;
        }
    }
    ll maxx = 0;
    ll minn = INT_MAX;
    for(i,0,n,1) {
        if(arr[i] < minn) {
            minn = arr[i];
        } else if(arr[i] > minn) {
            maxx = arr[i];
        }
    }
    cout<<maxx<<" "<<minn;


    return 0;
}
