#include <iostream>

using namespace std;

int main() {
    string s;
    cin>>s;
    char array[5] = {'h','e','l','l','o'};
    int counter = 0;
    for(int i = 0 ; i < s.size(); i++ ) {
        if( s[i] == array[counter]) {
            counter++;
        }
        if(counter == 5){
            printf("YES");
            break;
        }
    }
    if(counter != 5){
        printf("NO");
    }
    return 0;
}
