#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    double sum = 0;
    int array[n];
    for(int i = 0 ; i < n ; i++) {
        int x;
        cin>>x;
        sum += x;
        array[i] = x;
    }
    sort(array,array + n);
    double summation = 0;
    int count = 0;
    for(int i = n-1 ; i>=0 ; i--) {
        summation += array[i];
        count++;
        if(summation > sum / 2.0 ){
            break;
        }

    }
    cout<<count;
    return 0;
}
