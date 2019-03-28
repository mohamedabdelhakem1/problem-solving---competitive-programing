#include <iostream>
#include <string>
#include <string.h>
#define MOD 1000000007
using namespace std;
long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power > 0) {

        if(power % 2 == 1) { // Can also use (power & 1) to make code even faster
            result = (result*base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2; // Can also use power >>= 1; to make code even faster
    }
    return result;
}

int main() {
    string s;
    cin>>s;
    string sub ;
    string maxx_s;
    int maxx_n ;
    for(int i = 0 ; i < s.size(); i++) {
        sub = s.substr(0,s.size());
        sub.erase(i,1);
        int n = 0;
        for(int j = 0 ; j < sub.size(); j++) {
            if(sub[j] == '1') {
                n += fast_power(2,sub.size()-1-j);
            }
        }
        if(n > maxx_n){
            maxx_s = sub;
            maxx_n = n;
        }
    }

         cout<<maxx_s;

    return 0;
}
