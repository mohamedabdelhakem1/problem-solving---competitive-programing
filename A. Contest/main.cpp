#include <iostream>

using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int misha = max(3*a/10, a-(a/250)*c);
    int vasya = max(3*b/10, b-(b/250)*d);

    if(misha > vasya) {
        printf("Misha");
    } else if(misha < vasya) {
        printf("Vasya");
    } else {
        printf("Tie");
    }

    return 0;
}
