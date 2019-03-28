#include <iostream>
#include <math.h>
#include <queue>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin>>n;
    int arr[2][n];
    for (int i = 0 ; i < n ; i++) {
        arr[0][i] = 0;
        cin>>arr[1][i];
    }
    sort(arr[1],arr[1]+n);
    int size = 0;
    int num_piles = 0;

    int counter = 0;
    for (int i = 0 ; i < n ; i++) {
        if (arr[1][i] >= size && arr[0][i] == 0) {
            size++ ;
            arr[0][i] = 1;
        } else {
            counter ++ ;
        }
        if(i == n-1 && counter != n) {
            num_piles++ ;
            i = -1;
            size = 0 ;
            counter = 0 ;
        } else if(i == n-1 && counter == n) {
            break;
        }

    }
    printf("%d",num_piles);
    return 0;
}
