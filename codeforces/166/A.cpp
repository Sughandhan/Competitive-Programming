#include<iostream>
#include<algorithm>

using namespace std;

bool comp(pair<int, int> x, pair<int, int> y){
    return x.first>y.first || ((x.first==y.first) && (x.second< y.second));
}

int main(){
    int n,k;
    cin>>n>>k;
    pair<int, int> rank[100];
    for(int i=0;i<n;i++){
        //int a, b;
        //cin>>a>>b;
        cin>>rank[i].first>>rank[i].second;
    }
    sort(rank, rank+n, comp);
    int ans=0;
    for(int i=0;i<n;i++)
        if(rank[i] == rank[k-1]) ++ans;
    cout<<ans;
    return 0;
}