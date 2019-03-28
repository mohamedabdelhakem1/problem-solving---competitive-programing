#include <iostream>
#include<string>
#include <map>
using namespace std;
bool check(string s) {
    string ss = s.substr(0,1);
    int ns = s.size();
    for(int i  = 1 ; i< ns; i++) {
        if(s[i] != s[i-1]) {
            ss += s[i];
        }
    }
    int c = 0;
    int n = ss.size();
    for(int i = 0 ; i < n/2 ; i++) {
        if(ss[i] == ss[n-1-i]) {
            c++;
        }
    }
    if(c == n / 2) {
        return true;
    } else {
        return false;
    }
}
int main() {
    string s ;
    cin>>s ;
    int odd = s.size();
    int even = 0 ;
    map <string,bool> palin;
    map <string,bool> not_palin;
    bool prev_palin ;
    string str ;
    for(int i = 0 ; i < s.size() - 1; i++) {
        for(int j = i+2  ; j <= s.size()  ; j++) {
            if( j < s.size() && palin[str] > 0 && s[j] == str.at( str.length() - 1 )) {
                str = s.substr(i,j-i);
                if(str.size() % 2 == 0) {
                    even++;
                } else {
                    odd++;
                }
                continue;
            }
            str = s.substr(i,j-i);
            if(palin[str] > 0 ) {
                if(str.size() % 2 == 0) {
                    even++;
                } else {
                    odd++;
                }
            } else {

                bool b = check(str);
                if( b > 0) {
                    palin[str] = true;
                    if(str.size() % 2 == 0) {
                        even++;
                    } else {
                        odd++;
                    }
                }


            }


        }
    }
    cout<<even<<" "<<odd;
    return 0;
}
