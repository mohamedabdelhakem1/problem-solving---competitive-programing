#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int array[m];
    for (int i = 0 ; i < m ; i++) {
        cin>>array[i];
    }

    sort(array,array+m);

    int minm = array[n-1] - array[0];

    for (int i = 1 ; i <= m-n ; i++) {

            minm = min(array[i+n-1] - array[i],minm);
    }
    cout<<minm;

    return 0;
}
