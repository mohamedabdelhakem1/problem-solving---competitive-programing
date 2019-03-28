#include <iostream>
#include <stack>
using namespace std;
#define max 200000
#define ll long long
int main() {
    ll n;
    scanf("%lld",&n);
    ll q[n-1];
    ll arr[n];
    for(ll i = 0 ; i< n-1 ; i++) {
        scanf("%lld",&q[i]);
        arr[i] = i+1;
    }
    arr[n-1] = n;
    ll final_ans[n];
    bool found = false;
    ll aaaa[n];

    for(ll i = n-1 ; i >= 0 ; i--) {
        ll arr_copy[n];
        for(ll z = 0 ; z < n ; z++) {
            arr_copy[z] = arr[z];
        }
        ll ans[n];
        ans[n-1] = i+1;
        arr_copy[ans[n-1]-1] = -1;
        ll j;
        for(j = n-2 ; j >= 0 ; j--) {
            if(q[j] != 0) {
                ans[j] = ans[j+1] - q[j];
                if(  ans[j] > 0 && ans [j] <= n ) {
                    if (arr_copy[ans[j]-1] == ans[j]) {
                        arr_copy[ans[j]-1] = -1;
                    } else {
                        break;
                    }
                } else {
                    break;
                }
            } else {
                printf("-1");
                return 0 ;
            }

        }
        if(j == -1) {
            for(ll i = 0 ; i < n ; i++) {
                printf("%lld ",ans[i]);
            }
            return 0;
        }
    }
    printf("-1");
    return 0 ;
}
