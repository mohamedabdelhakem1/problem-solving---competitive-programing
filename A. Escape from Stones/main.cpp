#include <iostream>

using namespace std;

int main() {

    string s;
    cin>>s;
    int n = s.size();
    int arr[n];
    int l = n-1;
    int r = 0;
    for (int i = 0 ; i< n; i++) {
        if(s[i] == 'r') {
            arr[r] = i+1;
            r++;
        } else if(s[i] == 'l') {
            arr[l] = i+1;
            l--;
        }
    }
    for (int i = 0 ; i< n; i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
}
