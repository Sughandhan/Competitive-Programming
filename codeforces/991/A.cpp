#include<iostream>

using namespace std;

int main(){
    int a, b, c, n;
    cin>>a>>b>>c>>n;
    int num = a+b-c;
    if(a<c || b<c){
        cout<<-1;
    }
    else if(num<n){
        cout<<n-num;
    }
    else{
        cout<<-1;
    }
    return 0;
}