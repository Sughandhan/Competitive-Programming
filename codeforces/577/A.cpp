#include<iostream>

using namespace std;

int main(){
    long long int n,x;
    cin>>n>>x;
    if(n*n>=x){
        long long int count = 0;
        for(long long int i=1; i<=n; i++){
            if(x%i==0 && (x/i)<=n){
                count++;
            }
        }
        cout<<count;
    }
    else{
        cout<<0;
    }
    return 0;
}