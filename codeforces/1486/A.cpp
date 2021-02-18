#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n; i++){
            cin>>arr[i];
        }
        int flag=1;
        for(long long int i=0;i<n; i++){
            if(arr[i]>=i && i<n-1){
                long long int x=arr[i]-i;
                arr[i+1]=arr[i+1]+x;
            }
            else if(i==n-1 && arr[i]>=i){
                break;
            }
            else if(i==n-1 && arr[i]<i){
                flag=0;
                break;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }    
    return 0;
}