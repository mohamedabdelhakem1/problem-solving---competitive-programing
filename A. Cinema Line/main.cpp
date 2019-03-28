#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int n25 = 0;
    int n50 = 0;
    int n100 = 0;
    int b;
    int i;
    for(i = 0 ; i < n; i++) {
        cin>>b;
        if(b == 25) {
            n25++;
        } else if(b == 50) {
            n50++;
            if(n25 > 0) {
                n25--;
            } else {
                printf("NO");
                break;
            }
        } else if(b == 100) {
            n100++;
            if(n50 > 0 && n25 > 0) {
                n25--;
                n50--;
            } else if (n25 > 2) {
                n25 = n25-3;
            } else {
                printf("NO");
                break;

            }
        }
    }
    if(i == n) {
        printf("YES");
    }
    return 0;
}
