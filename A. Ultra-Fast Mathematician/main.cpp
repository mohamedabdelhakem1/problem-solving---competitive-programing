#include <iostream>

using namespace std;

int main()
{
    string first;
    string second;
    string result = "";
    cin>>first;
    cin>>second;

    for(int i =0 ; i < first.size() ; i++){
      if(first[i] != second[i]){
            result.append("1");
      }else{
          result.append("0");
      }
    }
    cout<<result;

    return 0;
}
