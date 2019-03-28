#include <iostream>
#define ll long long
#define rep(i,x,n,inc) for(ll i = x; i < n ;i= i +1)
#define MOD 1000000007
using namespace std;
long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power > 0) {

        if(power % 2 == 1) { // Can also use (power & 1) to make code even faster
            result = (result*base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2; // Can also use power >>= 1; to make code even faster
    }
    return result;
}
int main() {
    ll n,k;
    cin>>n>>k;
    ll arr[n-1][3];
    ll i;
    ll j;
    ll mat[n][n];
    rep(i,0,n-1,1) {
        rep(j,0,3,1) {
        cin>>arr[i][j];
        }
    }

    ll all_s = fast_power(n,k);


    return 0;
}
