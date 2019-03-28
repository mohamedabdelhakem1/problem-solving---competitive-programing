#include <iostream>
#include <iostream>
#define ll long long
#define repi(i,x,n,inc) for(ll i = x; i < n ;i= i +1)
#define rep(i,n) for(ll i = n-1; i >= 0 ;i--)
#define MOD 1000000007
#define size 10000
using namespace std;


void merge(int arr[],int s[],int b[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];
    int ls[n1], rs[n2];
    int lb[n1], rb[n2];
    for (i = 0; i < n1; i++) {
        L[i] = arr[l + i];
        ls[i] = s[l+i];
        lb[i] = b[l+i];
        //   cout<< ls[i]<<" "<<lb[i]<<endl;
    }

    for (j = 0; j < n2; j++) {
        R[j] = arr[m + 1+ j];
        rs[i] = s[m+1+j];
        rb[i] = b[m+1+j];
        //x   cout<< rs[i]<<" "<<rb[i]<<endl;
    }


    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            s[k] = ls[i];
            b[k] = lb[i];
            //  cout<< ls[i]<<" "<<lb[i]<<endl;
            i++;
        } else {
            arr[k] = R[j];
            s[k] = rs[j];
            b[k] = rb[j];
            //  cout<< rs[i]<<" "<<rb[i]<<endl;
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1) {
        arr[k] = L[i];
        s[k] = ls[i];
        b[k] = lb[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2) {
        arr[k] = R[j];
        s[k] = rs[j];
        b[k] = rb[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int s[],int b[], int l, int r) {
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr,s,b,  l, m);
        mergeSort(arr,s,b, m+1, r);

        merge(arr,s,b, l, m, r);
    }
}
int main() {
    int n,m;

    cin>>n>>m;
    int p[n],s[n],b[n],inc[m],pref[m];
    int i;
    int j;
    repi(i,0,n,1) {
        cin>>p[i];
    }
    repi(i,0,n,1) {
        cin>>s[i];
    }
    repi(i,0,n,1) {
        cin>>b[i];
    }
    repi(i,0,m,1) {
        cin>>inc[i];
    }
    repi(i,0,m,1) {
        cin>>pref[i];
    }
    mergeSort(p,s,b,0,n-1);

    repi(i,0,n,1) {
        cout<<p[i] <<" ";
    }
    cout<<endl;
     repi(i,0,n,1) {
        cout<<s[i] <<" ";
    }
    cout<<endl;
     repi(i,0,n,1) {
        cout<<b[i] <<" ";
    }
    cout<<endl;
    repi(i,0,m,1) {
        int counter = 0;
        repi(j,0,n,1) {
            if(s[j]>= inc[i] && p[j] <= inc[i] && abs(b[j] - pref[i]) <= inc[i] - p[j]) {
                counter++;
            }
        }
        cout<<counter<<" ";
    }

    return 0;
}
