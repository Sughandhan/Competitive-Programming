#include<iostream>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,k;
    cin>>n>>k;
    long long int m=(n+1)/2;
    if(m>=k){
        cout<<(2*k)-1;
    }
    else{
        cout<<2*(k-m);
    }
    return 0;
}