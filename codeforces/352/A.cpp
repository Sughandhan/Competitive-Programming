#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int five=0, zero=0;
    for(int i=0;i<n ;i++){
        int x;
        cin>>x;
        if(x==5){
            five++;
        }
        else{
            zero++;
        }
    }
    if(zero==0){
        cout<<-1;
    }
    else if(five/9>=1 && zero>0){
        int l=five - (five%9);
        for(int i=0; i<l;i++){
            cout<<5;
        }
        for(int i=0;i<zero;i++){
            cout<<0;
        }
    }
    else{
        cout<<0;
    }
    return 0;
}