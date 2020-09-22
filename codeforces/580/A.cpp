#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n], count=1, largest =1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            count++;
        }
        else{
            count=1;
        }
        if(count>largest){
            largest= count;
        }
    }
    // if(largest==1){
    //     cout<<
    // }
    cout<<largest;
    return 0;
}