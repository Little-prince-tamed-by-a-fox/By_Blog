#include <bits/stdc++.h>
using namespace std;
#define MAXN 205
#define MAXM 20005
int fir[MAXN];
bool vis[MAXN];
int ecnt, ans, n, m;
struct edge                 // 结构体存图
{
    int v, nxt;
}ed[MAXM];
void adde(int a, int b)        // 加边操作
{
    ed[++ecnt].v=b, ed[ecnt].nxt = fir[a] , fir[a]=ecnt;            // 链式前向星
}
void dfs(int x)                  // 搜索
{
    vis[x]=1;
    ans++;
    for(int i=fir[x]; i; i = ed[i].nxt)
    {
        int t = ed[i].v;
        if(!vis[t])
            dfs(t);
    }
}
int main()
{
    int a, b, x;
    scanf("%d %d", &n, &m);
    for(register int i = 1; i <= m; i++)
    {
        scanf("%d%d", &a, &b);
        adde(a, b);
    }
    scanf("%d", &x);
    dfs(x);
    printf("%d\n", ans);
    return 0;
}
