#include <iostream>
#include<algorithm>
#define ll long long
using namespace std;

int main() {
    ll n ;
    cin>>n;
    pair<ll,ll> ice [n];
    for(ll i = 0 ; i <  n; i++) {
        cin>>ice[i].first>>ice[i].second;
    }
    ll num = 0;
    for(ll i = 0 ; i <  n; i++) {
        for(ll j = i+1 ; j <  n; j++) {
            if(ice[i].first == ice[j].first || ice[i].second == ice[j].second) {
                num++;
            }
        }
    }
    cout<<n - num-1 ;
    return 0;
}
