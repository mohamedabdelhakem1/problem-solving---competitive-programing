#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    pair<int,int > arr[n];
    for(int i = 0 ; i <n ; i ++) {
        cin>>arr[i].first>>arr[i].second;
    }
    int q;
    cin>>q;
    int i ;
    for(i= 0 ;i < n ; i++){
        if(q >= arr[i].first && q <= arr[i].second ){
            break;
        }
    }
    cout<<n-i;
    return 0;
}
