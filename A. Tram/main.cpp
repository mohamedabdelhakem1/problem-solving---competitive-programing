#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    int counter = 0;
    int maxim = 0;
    int a;
    int b;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>a>>b;
        counter = counter - a + b;
        if(counter > maxim )
        {
            maxim = counter;
        }


    }
    cout<<maxim;

    return 0;
}
