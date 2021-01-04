#include<iostream>

using namespace std;

int main(){
    int n, pow;
    cin>>n;
    if(n==0){
        cout<<1;
    }
    else{
        pow = n%4;
        switch(pow){
            case 1:
                cout<<8;
                break;
            case 2:
                cout<<4;
                break;
            case 3:
                cout<<2;
                break;
            case 0:
                cout<<6;
                break;
        }
    }
    return 0;
}