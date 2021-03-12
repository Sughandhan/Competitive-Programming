#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    if(n<4){
        cout<<(n+1)/2<<endl;
        for(int i=1;i<=n;i=i+2){
            cout<<i<<" ";
        }
    }
    else{
        cout<<n<<endl;
        if(n>4){
            for(int i=1;i<=n;i=i+2){
               cout<<i<<" ";
            }
            for(int i=2;i<=n;i=i+2){
                cout<<i<<" ";
            }
        }
        else{
            for(int i=n-1;i>=1;i=i-2){
                cout<<i<<" ";
            }
            for(int i=n;i>=2;i=i-2){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}