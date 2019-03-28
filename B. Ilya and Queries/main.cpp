#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    int n;
    string s;
    cin>>s;
    cin>>n;
    pair <int,int> arr[n];
    int siz = s.size();
    int prefix[siz];
    for(int i = 0 ; i < n ; i++) {
        cin>>arr[i].first>>arr[i].second;
    }
    prefix[0] = 0;
    for(int i = 1 ; i < siz ; i++) {
        prefix[i]=0;
        if(s[i] == s[i-1]) {
            prefix[i] += prefix[i-1];
            prefix [i] += 1 ;
        } else {
            prefix[i] = 0;
            prefix[i] += prefix[i-1];
        }
    }
    for(int i = 0 ; i < n ; i++) {
        int l = arr[i].first - 1;
        int r = arr[i].second - 1;

        cout<<prefix[r]-prefix[l]<<endl;
    }
    return 0;
}
