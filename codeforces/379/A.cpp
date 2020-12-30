#include<iostream>

using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int i=0, count = 0;
    while(a>=b){
        count+=b;
        a=a-b+1;
    }
    count+=a;
    cout<<count;
    return 0;
}