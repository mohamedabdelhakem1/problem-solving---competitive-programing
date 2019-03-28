#include <iostream>
using namespace std;
int arr[510][510],arr2[510][510];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]!=arr2[i][j]){
                for(int k=i+1,l=j-1;l>=0&&k<n;l--,k++){
                        if(arr[k][l]==arr2[i][j]){
                            swap(arr[k][l],arr[i][j]);
                            cout<<"swap "<<"arr"<<k<<l<<"with"<<"arr"<<i<<j<<endl;
                            goto a;
                        }
                }

                cout<<"NO\n";
                return 0;
            }
        a:;
        }
    }
    cout<<"YES\n";
    return 0;
}
