#include <iostream>

using namespace std;

int main() {
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    pair<char,int >alphas[123];

    for(int i = 65 ; i<123; i++) {
        alphas[i].first = i ;
        alphas[i].second = 0;
    }

    for(int i = 0 ; i < s1.size(); i++) {
        if(s1[i] != ' ') {
            alphas[int(s1[i])].second += 1;
        }
    }

    int i;
    for( i = 0 ; i < s2.size(); i++) {
        if(s2[i] != ' ') {
            if( alphas[int(s2[i])].second > 0 ) {
                alphas[int(s2[i])].second -= 1;
            } else {
                printf("NO");
                break;
            }
        }

    }
    if( i == s2.size()) {
        printf("YES");
    }
    return 0;
}
