#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string first ;
    string second ;
    cin>>first;
    cin>>second;
    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);
    if(first<second){
        cout<<"-1";
    }else if (first>second){
        cout<<"1";
    }else{
        cout<<"0";
    }
    return 0;
}
