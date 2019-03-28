#include <iostream>

using namespace std;
struct input {
    int a;
    int b;
    int op;
};
struct input in1 [8];
int main() {
    in1[0] = {12,13,0};
    in1[1] = {13,10,1};
    in1[2] = {3,10,2};
    in1[3] = {13,10,3};
    in1[4] = {13,10,4};
    in1[5] = {13,10,5};
    in1[6] = {13,10,6};
    in1[7] = {13,10,7};

    return 0;
}
