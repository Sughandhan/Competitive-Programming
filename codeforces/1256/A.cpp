#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long int q;
    cin>>q;
    while(q--){
        long long int a, b, n, S;
        cin>>a>>b>>n>>S;
        long long int x= min(a, S/n);
        long long int amt = x*n;
        if(amt+b>=S){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}