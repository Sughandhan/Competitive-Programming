#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        __int64  n,m, x, c=1;
        cin>>n>>m>>x;
        __int64  i,j,r, ans;
        int flag=0;
        j=x/n;
        r=x%n;
        if(r==0){
            j--;
            i=n-1;
        }
        else{
            i=r-1;
        }
        ans = m*i+j+1;
        if(x==n*m){
            ans = x;
        }
        cout<<ans<<endl;
    }
    return 0;
}