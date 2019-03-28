#include <iostream>
#define ll long long
#define for(i,x,n,inc) for(ll i = x; i < n ;i= i +1)
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
    int n;
    string s;
    cin>>n;
    cin>>s;
    int i;
    int j;
    int sum = 0;
    for(i,0,n,1) {
        int num = (int)s[i]-48;
        if(num % 2 == 0) {
            sum += (i+1);
        }
    }
    cout<<sum;












    return 0;
}
