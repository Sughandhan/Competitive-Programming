#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(){
    long long int n;
    cin>>n;
    long long arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int q;
    cin>>q;
    sort(arr, arr+n);
    for(long long int i=0;i<q;i++){
        long long int x;
       cin>>x;
       long long int ans=upper_bound(arr,arr+n,x)-arr;
       cout<<ans<<endl;
    }
    return 0;
}