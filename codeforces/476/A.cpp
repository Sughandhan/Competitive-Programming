#include<iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int ans;
    ans = ((n+1)/2);
    ans= (ans+m-1)/m*m;
    if( ans>n){
        cout<<-1;
    }
    else{
        cout<<ans;
    }
    return 0;
}