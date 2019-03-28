#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    char hor_ver[n];
    int arr [n];
    vector<string> vec[n];

    for(int i = 0 ; i < n ; i++) {
        cin>>hor_ver[i]>>arr[i];
        for(int j = 0 ; j< arr[i] ; j++) {
            string s;
            cin>>s;
            vec[i].push_back(s);
        }
    }
     for(int i = 0 ; i < n ; i++) {
        cout<<hor_ver[i]<<arr[i];
        for(unsigned j = 0 ; j< arr[i] ; j++) {
            cout<<vec[i]->at(j);

        }
    }


    return 0;
}
