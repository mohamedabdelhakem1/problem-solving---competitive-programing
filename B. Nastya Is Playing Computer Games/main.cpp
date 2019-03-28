#include <iostream>

using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int steps  ;
    if(k == 1 || k == n) {
        steps = 3*n;
    } else {

        if( n %2 ==0) {
            if(k <= n / 2 || k-1 == n/2) {
                steps = 3*k + (k-1) + 3 * (n-k);
            } else {
                steps = 3*(n-k) + (n-k) + 3* (k);
            }
        } else {
            if(k <= n / 2) {
                steps = 3*k + (k-1) + 3 * (n-k);
            } else {
                steps = 3*(n-k) + (n-k) + 3* (k);
            }
        }


    }
    cout<<steps;
    return 0;
}
