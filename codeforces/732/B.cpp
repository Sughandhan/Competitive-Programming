#include<iostream>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]+arr[i]>=k){
            continue;
        }
        else{
            int x= k-arr[i-1] - arr[i];
            count+= x;
            arr[i]+=x;
        }
    }
    cout<<count<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}