#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    pair <int,int > arr [n];
    for(int i = 0 ; i < n; i++) {
        cin>>arr[i].first;
        arr[i].second = i+1;
    }
    sort(arr,arr+n);
    pair <int,int > arr2 [n];
    int sum = 0;
    int i = 0;
    if(arr[0].first > k) {
        printf("0");
    } else if(arr[0].first == k) {
        printf("1\n1");
    } else {
        while (sum < k && i < n) {
            sum += arr[i].first;
            arr2[i] = arr[i];
            i++;
        }
        if(sum > k) {
            i--;
            cout<<i<<endl;
            for(int j = 0 ; j < i ; j++ ) {
                cout<<arr2[j].second<<" ";
            }
        } else {
            cout<<i<<endl;
            for(int j = 0 ; j < i ; j++ ) {
                cout<<arr2[j].second<<" ";
            }
        }
    }

    return 0;
}
