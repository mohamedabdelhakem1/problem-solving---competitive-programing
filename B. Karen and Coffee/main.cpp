#include <iostream>

using namespace std;

int main() {
    long long int arr[200002];
    long long int arr2[200002];
    int n,k,q;
    scanf("%d%d%d",&n,&k,&q);
    int minn = 0;
    int maxx = 0;
    for(int i= 0 ; i < n; i++) {
        int n1,n2;
        scanf("%d%d",&n1,&n2);

        arr[n1] += 1;
        arr[n2+1] -= 1;
    }
    for(int i = 1 ; i < 200002 ; i++ ) {
        arr[i] += arr[i-1];
        if(arr[i] >= k) {
            arr2[i] = 1;
        } else {
            arr2[i] = 0;
        }
    }

    for(int i = 1 ; i <= 200002 ; i++ ) {
        arr2[i] += arr2[i-1];

    }
    for(int i= 0 ; i < q; i++) {
        int n1,n2;
        scanf("%d%d",&n1,&n2);
        cout<<arr2[n2]-arr2[n1-1]<<endl;
    }
    return 0;
}
