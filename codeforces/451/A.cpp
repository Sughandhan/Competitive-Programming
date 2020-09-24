#include<iostream>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int a=0;
    while(n!=0 && m!=0){
        n--;
        m--;
        a++;
    }
    if(a%2==0){
        cout<<"Malvika";
    }
    else{
        cout<<"Akshat";
    }
    return 0;
}