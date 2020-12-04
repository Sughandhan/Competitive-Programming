#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        long long int maxi;
        long long int mini;
        if(i==0){
            maxi = arr[n-1]- arr[0];
            mini = arr[1]- arr[0];
        }
        else if(i==n-1){
            maxi = arr[n-1]- arr[0];
            mini = arr[n-1]- arr[n-2];
        }
        else{
            mini= min(arr[i+1]-arr[i],arr[i]-arr[i-1]);
            maxi= max(arr[i]-arr[0],arr[n-1]-arr[i]);
        }
        cout<<mini<<" "<<maxi<<"\n";
    }
    return 0;
}