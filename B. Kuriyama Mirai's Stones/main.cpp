#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ll n,m;
    cin>>n;
    ll arr[n];
    ll prefix[n];
    ll ordered_prefix[n];
    ll sum = 0;
    for(ll i = 0 ; i < n ; i++) {
        cin>>arr[i];
        sum += arr[i];
        prefix[i] = sum;
    }
    sort(arr,arr+n);

    sum = 0;
    for(ll i = 0  ; i < n ; i++) {
        sum += arr[i];
        ordered_prefix[i] = sum;
    }

    sum = 0;
    cin>>m;
    ll type[m];
    pair<ll,ll > borders[m];
    for(ll i = 0  ; i < m ; i++) {
        cin>>type[i]>>borders[i].first>>borders[i].second;
    }
    for(ll i = 0  ; i < m ; i++) {
        ll right = borders[i].second-1;
        ll left = borders[i].first - 2;

        if(type[i] == 1) {
            if(left < 0) {
                cout<<prefix[right]<<endl;
            } else {
                cout<<prefix[right]  - prefix[left] <<endl;
            }
        } else {
            if(left < 0) {
                cout<<ordered_prefix[right]<<endl;
            } else {
                cout<<ordered_prefix[right]  - ordered_prefix[left] <<endl;
            }
        }

    }

    return 0;
}
