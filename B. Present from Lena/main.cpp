#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i = 0 ; i <= n ; i++) {
        for(int k = 0 ; k < n-i ; k++) {
            printf("  ");
        }
        for(int j = 0; j <= i ; j++ ) {
            printf("%d ",j);
        }
        for(int j = i-1 ; j >=0; j--) {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(int i = n-1 ; i >=0  ; i--) {
        for(int k = 0 ; k < n-i ; k++) {
            printf("  ");
        }
        for(int j = 0; j <= i ; j++ ) {
            if(j==i && i == 0 ) {
                printf("%d",j);
                continue;
            }
            printf("%d ",j);
        }
        for(int j = i-1 ; j >=0; j--) {

            printf("%d ",j);
        }
        if(i != 0) {
            printf("\n");
        }

    }

    return 0;

}
