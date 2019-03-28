#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string s;

    cin>>n;
    cin>>s;
    sort(s.begin(),s.end());
    string strs[n];
    if(s.size() % n == 0 ) {
        int counter = 0;
        for(int i = 0 ; i< s.size(); i++) {
            if(counter % n == 0) {
                counter = 0;
            }
            strs[counter] += s[i];
            counter++;
        }
        int tr = 0;
        for(int i = 0 ; i < n-1 ; i++) {
            if(strs[i] == strs[i+1]) {
                tr++;
            }
        }
        if(tr == n-1) {
            for(int i = 0 ; i < n ; i++) {
                cout<<strs[i];
            }
        }else{
        printf("-1");
        }

    } else {
        printf("-1");
    }


    return 0;
}
