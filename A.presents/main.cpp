#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int array[n];
    int i;
    int res[n];
    for (i = 0 ; i < n ; i++)
    {
        cin>>array[i];
        res[array[i]-1]=i+1;
    }
    for (i = 0 ; i < n ; i++)
    {
        cout<<res[i]<<" ";

    }
}
