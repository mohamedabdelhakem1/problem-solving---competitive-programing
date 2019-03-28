#include <iostream>
#define ll long long
#define rep(i,x,n,inc) for(ll i = x; i < n ;i= i +1)
#define MOD 1000000007
using namespace std;

int main() {
    ll n;
    cin>>n;
    ll arr[n];
    ll bou[n];
    ll i;
    rep(i,0,n,1) {
        cin>>arr[i];
    }
    ll sum = arr[n-1] ;
    bou[n-1] = arr[n-1];
    for(ll i = n-2 ; i >= 0 ; i--) {
        if(arr[i] < bou[i+1] ) {
            bou[i] = arr[i];
            sum += arr[i];
        } else if(arr[i] >= bou[i+1] )
            if(bou[i+1] > 0) {
                bou[i] = bou[i+1] - 1;
                sum += bou[i];
            } else {
                bou[i] = 0;
            }

    }

    cout<<sum;
    return 0;
}
