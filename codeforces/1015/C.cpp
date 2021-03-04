#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(){
    long long int n, m, sum=0;
    cin>>n>>m;
    vector<long long int> v;
    for(long long int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        sum+=a;
        v.push_back(a-b);
    }
    sort(v.begin(), v.end(), greater<long long int>());
    if(sum<=m){
        cout<<0;
    }
    else{
        long long c=0;
        while(sum>m && c<n){
            sum-=v[c];
            c++;
        }
        if(sum>m){
            cout<<-1;
        }
        else{
            cout<<c;
        }
    }
    return 0;
}