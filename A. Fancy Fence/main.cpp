#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++) {
        int  ceta;
        cin>>ceta;
        float formula = 2.0/(1.0 - ceta/180.0);
        if(trunc(formula) == formula){
           printf("YES\n");
        }else{
            printf("NO\n");
        }


    }



    return 0;
}
