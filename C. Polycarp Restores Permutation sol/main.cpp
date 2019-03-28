#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll n;
    scanf("%lld",&n);
    ll q[n-1];
    ll p_dash[n];
    ll sum = 0;
    ll arr[n];
    for(ll i = 0 ; i< n-1 ; i++) {
        scanf("%lld",&q[i]);
        p_dash[i] = sum;
        arr[i] = 0;
        sum += q[i];
    }
    arr[n-1] = 0;
    p_dash[n-1] = sum;
    ll minn = 0;
    for(ll i = 1 ; i< n ; i++) {
        if(p_dash[i]< p_dash[minn]) {
            minn = i;
        } else if(p_dash[i] == p_dash[minn]) {
            printf("-1");
            return 0;
        }
    }
    ll x = 1 - p_dash[minn];
    for(ll i = 0 ; i< n ; i++) {
        p_dash[i] += x;
        if(arr[p_dash[i]-1] != 0 || p_dash[i] < 1 || p_dash[i] > n ) {
            printf("-1");
            return 0;
        }else{
            arr[p_dash[i]-1] = 1;
        }

    }
     for(ll i = 0 ; i< n ; i++) {
       printf("%lld ",p_dash[i]);
    }

    return 0;
}
