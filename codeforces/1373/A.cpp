#include<iostream>
 
using namespace std;
 
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int a, b, c;
        cin>>a>>b>>c;
        long long int c1, c2;
        if(a<c){
            c1=1;
        }
        else{
            c1=-1;
        }
        if(a*b>c){
            c2=b;
        }
        else{
            c2=-1;
        }
        cout<<c1<<" "<<c2<<endl;
    }
    return 0;
}