#include <iostream>

using namespace std;

int main() {
    int n,x,y;
    cin>>n>>x>>y;
        n = n/2;
    if ((x == n || x == n + 1) && (y == n || y == n + 1)) {
            printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    return 0;
}
