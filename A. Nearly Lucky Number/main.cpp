#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;


    int counter = 0;
    for (int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == '7' || s[i] == '4' )
        {
            counter++;

        }
    }

    if(counter == 4 || counter == 7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }




    return 0;
}
