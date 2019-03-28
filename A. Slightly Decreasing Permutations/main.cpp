#include <iostream>

using namespace std;

int main() {
    int n,k;
    cin>>n>>k;


    for(int i = 0 ; i < n-k-1 ; i++) {
        cout<<i+1<<" ";
    }
    int counter = 0;
    for(int i = n-k-1 ; i < n ; i++) {
        cout<< n - counter<<" ";
        counter++;

    }

    return 0;
}
