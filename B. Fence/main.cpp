#include <iostream>

using namespace std;

int main()
{
   int n,k;
   cin>>n>>k;
   int array[n+1];
    int input;
   int sum = 0;
    for(int i = 1 ;i <= n ;i++){

        cin>>input;
        sum += input;
        array[i]= sum;
    }
 /*    for(int i = 1 ;i <= n ;i++){
        cout<<array[i]<<endl;
    }*/
    int minn = array[k];
    int index = 1;

    for(int i = k+1 ; i <= n ; i++){
        if( array[i] - array[i-k]  < minn ){
            minn =  array[i] - array[i-k];
            index = i - k + 1;
        }
    }
    cout<<index;
    return 0;
}
