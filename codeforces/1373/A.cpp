#include<iostream>
 
using namespace std;
 
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int a, b, c;
        cin>>a>>b>>c;
        long long int c1, c2;
        if(a>c){
            c1=-1;
        }
        else if(a<c){
            c1=1;
        }
        else if(a*(b+1)<=2*c){
            c1=b+1;
        }
        else{
            c1=-1;
        }
        if(a*b<=c){
            c2=-1;
        }
        else{
            c2=b;
        }
        cout<<c1<<" "<<c2<<endl;
    }
    return 0;
}