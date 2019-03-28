#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    pair <int,int > arr [n];
    for(int i = 0 ; i < n; i++) {
        cin>>arr[i].first>> arr[i].second ;
    }
    sort(arr,arr+n);
    pair <int,int > tv1, tv2;
    if(n <= 2) {
        printf("YES");
    } else {
        tv1 = arr[0];
        tv2 = arr[1];
        int counter;
        for(int i = 2 ; i < n ; i++) {
            if(arr[i].first > tv1.second  ) {
                counter = i;
                tv1 = arr[i];
            } else if(arr[i].first > tv2.second ) {
                counter = i ;
                tv2 = arr[i];
            } else {
                printf("NO");
                break;
            }
        }
        if(counter == n-1) {
            printf("YES");
        }
    }
        return 0;

}
