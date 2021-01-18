#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==0){
        n=n/2;
        long long int x = pow(2,n);
        cout<<x;
    }
    else{
        cout<<0;
    }
    return 0;
}