#include<iostream>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int a1, a2,a3,a4;
        a1=(a-b)*n;
        a2=(a+b)*n;
        a3=(c-d);
        a4=(c+d);
        if(a1>a4 || a2<a3){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}