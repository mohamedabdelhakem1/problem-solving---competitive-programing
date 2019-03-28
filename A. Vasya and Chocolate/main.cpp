#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    unsigned long long s[n],a[n],b[n],c[n];
    unsigned long long maxx[n];

    for(int i = 0 ; i < n ; i++) {
        cin>>s[i]>>a[i]>>b[i]>>c[i];
        maxx[i] = (s[i]/c[i] + (s[i]/(a[i]*c[i]))*b[i]);

    }
    for(int i = 0 ; i < n ; i++) {
        cout<<maxx[i]<<endl;
    }
    return 0;
}
