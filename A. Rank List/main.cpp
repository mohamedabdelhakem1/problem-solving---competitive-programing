#include <iostream>
#include <algorithm>
using namespace std;

void merge( pair<int,int> arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    pair<int,int> L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];


    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i].first > R[j].first) {
            arr[k] = L[i];
            i++;
        } else if (L[i].first == R[j].first) {
            if (L[i].second <= R[j].second) {
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
            }
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(pair<int,int> arr[], int l, int r) {
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size) {
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}



int main() {
    int n,k;
    cin>>n>>k;
    pair<int,int> teams [n];
    k--;
    for(int i = 0; i < n; i++) {
        cin>>teams[i].first>>teams[i].second;
    }
    int counter = 1;
    mergeSort(teams,0,n-1);
    /*  sort(teams,teams+n);

      for(int i = 0; i < n/2; i++) {
          pair<int,int> temp ;
          temp = teams[i];
          teams[i] = teams[n-i-1];
          teams[n-i-1] = temp;
      }
      cout<<endl;
       for(int i = 0; i < n; i++) {
           cout<<teams[i].first<<" "<<teams[i].second << endl;
      }
*/


    pair <int,int> accessed_team = teams[k];
    int up = k+1;
    int down = k-1;


    while (up < n ) {

        if (accessed_team ==  teams[up] ) {
            counter++;
        } else {
            break;
        }
        up++;

    }
    while (down >= 0) {

        if (accessed_team == teams[down]) {
            counter++;
        } else {
            break;
        }
        down--;

    }
    cout<<counter;
    return 0;
}
