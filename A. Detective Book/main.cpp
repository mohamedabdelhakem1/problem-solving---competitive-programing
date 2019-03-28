#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n; i++) {
        cin>>arr[i];
    }
    int num =0;
    int maxx_page = 0;
    for(int i = 0 ; i<n; i++) {

        maxx_page = max(maxx_page,arr[i]);
        if(i+1 == arr[i] && maxx_page == arr [i] ) {
            num++;
        }

    }
    cout<<num;
    return 0;
}
