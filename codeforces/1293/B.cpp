#include<iostream>

using namespace std;

int main(){
    double n, sum=0;
    cin>>n;
    for(double i=1;i<=n;i++){
        sum= sum + (1/i);
    }
    cout<<sum;
}