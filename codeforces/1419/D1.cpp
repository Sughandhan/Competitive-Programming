#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    if(n<3){
        cout<<0<<endl;
    }
    else{
        cout<<(n-1)/2<<endl;    
    }
    long long int array[n], j=1;
    for(long long int i=0;i<n/2;i++){
        array[j]=arr[i];
        j=j+2;
    }
    j=0;
    for(long long int i=n/2;i<n;i++){
        array[j]=arr[i];
        j=j+2;
    }
    for(long long int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}