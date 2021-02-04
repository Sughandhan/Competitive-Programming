#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
    pair<int,int>a[n];
    for(i=0;i<n;i++){
        scanf("%d%d",&a[i].first,&a[i].second);
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++){
        if(a[i].first<a[i+1].first&&a[i].second>a[i+1].second){
            printf("Happy Alex\n");
            return 0;
        }
    }
    printf("Poor Alex\n");
    return 0;
}