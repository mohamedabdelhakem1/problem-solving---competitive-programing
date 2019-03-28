#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    string first;
    string sec;
    string comb;
    cin>>first;
    cin>>sec;
    cin>>comb;
    if(comb.size() == first.size() + sec.size()) {
        sort(first.begin(),first.end());
        sort(sec.begin(),sec.end());
        sort(comb.begin(),comb.end());

        for(int i = 0 ; i < comb.size() ; i ++) {
            if(comb[i] == first[0]) {
                first.erase(first.begin(),first.begin()+1);
            } else if(comb[i] == sec[0]) {
                sec.erase(sec.begin(),sec.begin()+1);
            } else {
                cout<<"NO";
                break;
            }
        }
        if(first.size()==0 && sec.size() == 0){
            cout<<"YES";
        }
        } else {
        cout<<"NO";
    }

    return 0;
}
