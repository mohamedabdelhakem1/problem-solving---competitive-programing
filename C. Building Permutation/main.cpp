#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort (arr,arr+n);
    ll sum = 0;
     for(ll i = 0 ; i < n ; i++){
        sum =  sum + abs(i+1 - arr[i]);
    }
    cout<<sum;
    return 0;
}
