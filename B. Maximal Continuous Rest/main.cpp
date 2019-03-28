#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++) {
        cin>>arr[i];
    }
    int mx = 0;
    for(int i = 0 ; i < 2 * n  ; i++){
            int counter =0;
            while(i < 2 * n && arr[i %n] == 1){
                 counter++;
                 i++;
            }
            if(counter > mx){
                mx =counter;
            }

    }
    cout<<mx;
    return 0;
}
