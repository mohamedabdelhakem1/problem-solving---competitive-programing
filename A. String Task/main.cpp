#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    string op = "";
    string vowels = "aoyeui";
    for(int i = 0; i < s.size(); i++ ) {
        if (vowels.find(s[i]) == std::string::npos) {
            op += ".";
            op += s[i];
        }
    }
    cout<<op;
    return 0;

}
