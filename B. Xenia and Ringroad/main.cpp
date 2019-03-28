#include <iostream>

using namespace std;

int main() {
    int n,m;

    cin>>n>>m;
    int prev = 1;

    long long int time = 0;
    int next;
    for(int i = 0; i < m ; i++) {
        cin>>next;
        if(next>prev) {
            time = time + (next-prev) ;
        }else if(next<prev){
            time = time + (n - prev + next) ;
        }
        prev = next;

    }
    cout<<time;
    return 0;
}
