#include <iostream>

using namespace std;
#define max 51
int found = 0;
int counter = 0;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
void dfs(int n,int m, char arr[max][max],int i,int j,int pi,int pj,char prev,int visited[max][max],int start_i,int start_j) {


    if (i>=0 && i< n && j>=0 && j< m ) {
        if(arr[i][j] == prev  ) {
            if(visited[i][j] == 1 ) {
                found = 1;
                return;
            }
            visited[i][j] = 1;
            for(int f = 0; f < 4; f++) {
                int nextj = j + dx[f];
                int nexti = i + dy[f];
                if(nexti == pi && nextj == pj) continue;
                dfs(n,m,arr,nexti,nextj,i,j,prev,visited,start_i,start_j);
            }

        }
    }



}


int main() {
    int n,m;
    cin>>n>>m;
    char arr[max][max];
    int visited[max][max];
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cin>>arr[i][j];
            visited[i][j]=0;
        }
    }

    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            if(visited[i][j] == 0) {
                dfs(n,m,arr,i,j,-1,-1,arr[i][j],visited,i,j);

            }


        }

    }
  cout << (found ? "Yes" : "No") << endl;
    return 0;
}
