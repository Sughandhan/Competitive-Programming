#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long int num=0;
    for(int i=n;i>0;i--){
        num+= pow(2,i);
    }
    cout<<num;
    return 0;
}