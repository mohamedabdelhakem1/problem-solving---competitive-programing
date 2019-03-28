#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    if ( s.find("0000000")!=std::string::npos || s.find("1111111")!=std::string::npos){
        printf("YES");
    }else{
        printf("NO");
    }
        return 0;
}
