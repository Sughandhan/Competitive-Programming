#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxx=1e2+10;
int a[maxx];
int vis[maxx*maxx];
int n,x;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&x);
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=n;i++) scanf("%d",&a[i]),vis[a[i]]=1;
        int ans=1;
        while(x)
        {
            while(vis[ans]) ans++;
            vis[ans]=1;
            x--;
        }
        while(vis[ans]) ans++;
        cout<<ans-1<<endl;
    }
    return 0;
}