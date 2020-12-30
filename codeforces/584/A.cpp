#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n, t;
    cin>>n>>t;
    if(t==10){
        if(n==1){
            cout<<-1;
        }
        else{
            for(int i=0;i<n-1;i++){
                cout<<1;
            }
            cout<<0;
        }
    }
    else{
        for(int i=0;i<n;i++){
            cout<<t;
        }
    }
    // long long int num = pow(10,n-1);
    // long long int x= num%t, q= num/t;
    // num = num+t-x;
    // if(q>0|| t<10){
    //     cout<<num;    
    // }
    // else{
    //     cout<<-1;
    // }
    return 0;
}