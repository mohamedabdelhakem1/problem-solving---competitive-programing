#include <iostream>

using namespace std;

int main() {
    int n ;
    cin>>n;
    long long int dollars = 0;
    int array[n];
    long long int energy = 0;
    for(int i = 0 ; i < n; i++) {
        cin>>array[i];
        if(i == 0) {
            dollars += array[i];
        }else if (array[i] - array [i-1] >= energy) {
            dollars += (array[i] - array [i-1] - energy);
            energy = 0;
        }else{
            energy += (array[i-1] - array [i]);
        }

    }
    cout<<dollars;
    return 0;
}
