#include<iostream>

using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<max(a+b, c+d)<<endl;
    }
    return 0;
}