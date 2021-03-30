#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int arr[n], sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sum+=m;
    sort(arr, arr+n);
    int maxi = arr[n-1]+m;
    int mini;
    if(sum%n==0){
        mini = sum/n;
    }
    else{
        mini = sum/n +1;
    }
    mini = max(mini, arr[n-1]);
    cout<<mini<<" "<<maxi;
    return 0;
}