#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    pair<int,char> arr[26];
    map<char,vector >
    for(int i = 0 ; i < 26 ; i++) {
        arr[i].first = 0;
        arr[i].second= 'a' + i;
    }
    for(int i = 0 ; i < n ; i++) {
        int asci = s[i] - 'a';
        arr[asci].first++;
    }
    sort(arr,arr+26);

    return 0;
}
