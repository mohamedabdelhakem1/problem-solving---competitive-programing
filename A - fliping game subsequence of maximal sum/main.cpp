#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++) {
        cin>>arr[i];
    }
    int gain[n];
    int max_ending_here = 0 ;
    int max_ending_sofar = 0 ;
    int count_ones = 0;
    int count_zero = 0;
    int l,r;
    int firstL = 1;
    int maxx = 0;
    for(int i = 0 ; i < n ; i++) {
        if(arr[i]) {
            count_ones++;
            gain[i] = -1;
        } else {
            gain[i] = 1;
            count_zero++;
        }
        max_ending_here += gain[i];
        if(max_ending_here < 0) {
            max_ending_here = 0;

        }
        if(max_ending_here > max_ending_sofar) {
            if(firstL == 1) {
                l = i;
                firstL--;
            }
            max_ending_sofar = max_ending_here;
            r = i;
        }
    }



    for(int i = 0 ; i < l ; i++) {
        if(arr[i]) {
            maxx++;
        }
    }
    for(int i = l ; i <= r  ; i++) {
        if(!arr[i]) {
            maxx++;
        }
    }
    for(int i = r+1 ; i < n ; i++) {
        if(arr[i]) {
            maxx++;
        }
    }
    cout<<maxx;




    return 0;
}
