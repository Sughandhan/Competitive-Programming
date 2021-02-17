#include<iostream>
#include<algorithm>
#include<cmath>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a, b, count=0;
        cin>>a>>b;
        if((a>=1 && b>1) ||a>1 && b>=1 ){
            cout<<min(min(a,b), (a+b)/3)<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
    return 0;
}