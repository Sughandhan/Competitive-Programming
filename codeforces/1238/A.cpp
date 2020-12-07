#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x, y, z;
        cin>>x>>y;
        z = x-y;
        if(z>=2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}