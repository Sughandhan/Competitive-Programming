#include<iostream>

using namespace std;

int main(){
    long long int n, m;
    cin>>n>>m;
    if(m%n!=0){
        cout<<-1;
    }
    else if(n==1 && (m%3!=0 && m%2!=0) && m!=1){
        cout<<-1;
    }
    else{
        m=m/n;
        long long int count=0;
        while(m%2==0){
            m=m/2;
            count++;
        }
        while(m%3==0){
            m=m/3;
            count++;
        }
        if(m==1){
            cout<<count;    
        }
        else{
            cout<<-1;
        }
    }
    return 0;
}