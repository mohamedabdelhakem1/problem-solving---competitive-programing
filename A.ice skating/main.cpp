#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n ;
    cin>>n;
    int icex [n];
     int icey [n];
    for(int i = 0 ; i <  n; i++) {
        cin>>icex[i]>>icey[i];
    }
    sort(icex,icex+n);
    sort(icey,icey+n);
    int num = 0;
    for(int i = 1 ; i <  n; i++) {
       if(icex[i] == icex[i-1] ){
        num++;
       }
    }
    for(int i = 1 ; i <  n; i++) {
       if(icey[i] == icey[i-1] ){
        num++;
       }
    }
        cout<<'0';

        cout<<n- num-1;


    return 0;
}
