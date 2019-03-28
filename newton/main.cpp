#include <iostream>

using namespace std;

float func (float x) {
    return x*x*x - 2.0*x*x - 4.0 * x + 8.0 ;
}
float funcd (float x) {
    return 3.0*x*x - 4.0*x - 4.0  ;
}
int main() {
    float xi,xi1 ;
    cin >>xi;

    for (int i = 0 ; i < 100 ; i++) {
        xi1 = xi - func(xi) / funcd(xi);
        float ea = abs(xi1 - xi);
        cout<<xi<< " " <<func(xi) << " " << funcd(xi) << " " << xi1 << " " <<ea << endl;
        xi = xi1;

        if(ea <= 0.0001) {
            break;
        }
    }

    return 0;
}


