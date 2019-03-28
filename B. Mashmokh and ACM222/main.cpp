#include<cstdio>
#include <cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
#define MOD 1000000007
using namespace std;

int main()
{
    int i, j, t;
    int n, k;
    int dp[2005];
    scanf("%d%d", &n, &k);
    for ( i = 1; i <= n; i++ )
    {
		dp[i] = 1;
	}
	for ( i = 0; i < k-1; i++ )
    {
		for ( j = 1; j <= n; j++ )
        {
            t = j+j;
            while ( t <= n )
            {
                dp[j] = (dp[j]+dp[t])%MOD;

                t += j;
            }

        }
        for ( j = 1; j <= n; j++ )
        {
                printf("%d " ,dp[j]);
        }
        printf("\n");
	}
    for ( dp[0] = 0, i = 1; i <= n; i++ )
    {
		dp[0] = (dp[0]+dp[i])%MOD;
	}
	printf("%d\n", dp[0]);
    return 0;
}
