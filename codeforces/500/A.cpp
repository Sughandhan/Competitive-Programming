#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, t;
    cin>>n>>t;
    int arr[n], x=1;
    for(int i=1 ;i<n;i++){
        cin>>arr[i];
    }
    while(x<t){
        x+=arr[x];
    }
    if(x==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}