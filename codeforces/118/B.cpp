#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x=n, y=(2*n)+1, arr[n+1];
    for(int i=0;i<=n;i++){
        arr[i]=i;
    }
    int flag=0;
    while(y--){
        for(int i=0;i<2*x; i++){
            cout<<" ";
        }
        int c=0;
        for(int i=0;i<=n-x; i++){
            cout<<arr[i];
            c++;
            if(i==n-x && c==1){
                continue;
            }
            else{
                cout<<" ";
            }
        }
        for(int i=n-x-1;i>=0;i--){
            cout<<arr[i];
            if(arr[i]!=0){
                cout<<" ";
            }
        }
        // for(int i=0;i<x-1; i++){
        //     cout<<" ";
        // }
        cout<<endl;
        if(flag==1){
            x++;
        }
        else{
            x--;
        }
        if(x<0){
            x=x+2;
            flag=1;
        }
    }
    return 0;
}