#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define MX_N 200010
char s[MX_N];// original string
char ans[MX_N];// holds answer
int main(){

cin>>s;
	int n=strlen(s);
	int j=0;
	for(int i=0;i<n;i++){
		char ch=s[i];
		if((i>=2 && ch==ans[j-1] && ans[j-1]==ans[j-2])|| (i>=3 && ch==ans[j-1] && ans[j-2]==ans[j-3]))
		continue;
		else{
		ans[j]=s[i];
		j++;

	}
}
//ans[j]='\0';

cout<<ans<<endl;


return 0;
}
