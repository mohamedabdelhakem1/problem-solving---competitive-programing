#include <iostream>

using namespace std;

int main()
{
    string str;
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cin >> str;
        int rD = 0;
        int lD = 0;
        if (str[0] == '>' || str[n-1] == '<'){
            cout << "0" << endl;
            continue;
        }
        for (int i = 0; i < n; i++){
                if (str[i] == '>'){
                    break;
                }
            lD++;
        }

        for (int i = n-1; i>= 0; i--){
                if (str[i] == '<'){
                    break;
                }
            rD++;
        }

        if (lD <= rD){
            cout << lD << endl;
        } else {
            cout << rD << endl;
        }
    }

    return 0;
}
