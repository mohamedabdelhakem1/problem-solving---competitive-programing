#include <iostream>

using namespace std;

int main()
{   int n,m;
    cin>>n>>m;
    int array[n+1];
    for(int i = 1 ; i <= n;i++){
        cin>>array[i];
    }
    int sum = 0;
     for(int i = 0 ; i< m;i++){
        int p1,p2;
        cin>>p1>>p2;
        if(array[p1] <= array[p2]){
        sum +=  array[p1];
        }else{
        sum +=  array[p2];
        }
    }
    printf("%d",sum);
    return 0;
}
