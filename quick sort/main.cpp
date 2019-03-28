#include <iostream>
using namespace std;
int part(int arr[], int l, int r) {
    int pivot = arr[r];
    int i = l;
    for(int j = l ; j< r ; j++) {
        if(arr[j] < pivot) {
            swap(arr[j], arr[i]);
            i++;
        }
    }
    swap(arr[i],arr[r] );
    return i;
}
void quick_sort (int arr[], int l,int r) {
    if(l<r) {
        int piv =  part(arr,l,r);
        quick_sort(arr,l,piv-1);
        quick_sort(arr,piv+1,r);
    }
}

int main() {
    int arr[8] = {20,80,90,40,0,30,50,60};
    quick_sort(arr,0,7);
    for(int i = 0 ; i < 8 ; i++) {
        cout<<arr[i]<<endl;
    }
    return 0;
}
