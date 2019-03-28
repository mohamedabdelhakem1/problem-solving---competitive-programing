#include <iostream>

using namespace std;

float func (float x) {
    return x*x*x - x*x - 10.0 * x + 7 ;
}
int main() {
    float xi,xi_1,xi1 ;
    cin >>xi>>xi_1;

    for (int i = 0 ; i < 50 ; i++) {
        xi1 = xi - (func(xi) * (xi_1 - xi) ) / (func(xi_1) - func(xi));
        float ea = abs(xi1 - xi);
        cout<<xi_1<< " " <<xi<< " " <<func(xi_1) << " " << func(xi) << " " << xi1 << " " <<ea << endl;
        xi_1 = xi;
        xi = xi1;

        if(ea <= 0.0001) {
            break;
            printf("sds");
        }
    }

    return 0;
}


