#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(){
    long long int n;
    cin>>n;
    long long int arr[n], count=0;
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n, greater<int>());
    double ans;
    if(n==1){
        ans=3.1415926536*arr[0]*arr[0];
    }
    else{
        for(int i=0; i<n;i++){
            count+= arr[i]*arr[i]*(1-i%2*2);
        }
        ans= 3.1415926536*count;
    }
    cout<<ans;
    return 0;
}