#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x=0, y;
    for(int i=0; i<n; i++){
        y= arr[i]+x;
        cout<<y<<" ";
        x=max(y,x);
    }
    return 0;
}