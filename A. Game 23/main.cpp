#include <iostream>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int counter = 0;
    if(m%n == 0){
       m = m/n;
    }else{
        printf("-1");
        return 0;
    }

    while (m > 1) {
        if(m%2 == 0) {
            m = m/2;
            counter++;
        } else if(m%3 == 0) {
            m = m/3;
            counter++;
        } else{
            printf("-1");
            return 0;
        }
    }
    if(m == 1){
         cout<<counter;
    }else{
        printf("-1");
    }

    return 0;
}
