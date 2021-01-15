#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0; i<n ; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int flag=0, count=0;
    for(long long int i=0;i<n-2 ;i++){
        if(arr[i]+arr[i+1]>arr[i+2]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}