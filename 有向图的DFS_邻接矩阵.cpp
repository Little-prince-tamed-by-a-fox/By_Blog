#include <bits/stdc++.h>
using namespace std;
int n, m, ans;
#define MAXN 205
int are[MAXN][MAXN];
bool vis[MAXN];
void dfs(int x)
{
    ans++;
    vis[x] = 1;
    for(register int i = 1; i <= n; i++)
    {
        if(arr[x][i] && vis[i]==0)
        {
            dfs(i);
        }
    }
}
int main()
{
    scanf("%d %d", &n, &m);
    for(register int i = 1; i <= m; i++)
    {
        scanf("%d%d",&n,&m);
        arr[a][b] = 1;
    }
    int x;
    scanf("%d", &x);
    dfs(x);
    printf("%d\n", ans);
    return 0;
}
