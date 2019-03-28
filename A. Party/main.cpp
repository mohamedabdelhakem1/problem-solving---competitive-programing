#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int parent[n];
    for(int i = 0 ; i< n ; i++) {
        cin>>parent[i];
    }
    int depth = 0;
    for(int i = 0 ;i < n;i++){
        int nodes = 1;
        int x =i;
        while(parent[x] != -1){
            nodes++;
            x =  parent[x] - 1;
        }
    depth = max(depth,nodes);
    }
    cout<<depth;
    return 0;
}
