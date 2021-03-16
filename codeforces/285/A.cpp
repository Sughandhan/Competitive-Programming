#include<iostream>

using namespace std;

int main(){
    int n, k, i,j;
    cin>>n>>k;
    i=1, j=n;
    int x= n-k;
    while(k--){
        cout<<j<<" ";
        j--;
    }
    while(x--){
        cout<<i<<" ";
        i++;
    }
    return 0;
}