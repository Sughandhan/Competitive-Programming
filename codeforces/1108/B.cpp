#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n, x, y, l;
    cin>>n;
    int arr[n], count[10001];
    for(int i=0;i<10001;i++){
        count[i]=0;
    }
    for(int i=0;i<n; i++){
        cin>>arr[i];
        count[arr[i]]++;
    }
    sort(arr, arr+n);
    x = arr[n-1];
    l = x/2;
    arr[n-1]=0;
    for(int i=n-2; i>=0;i--){
        if(x%arr[i]==0 && count[arr[i]]==2){
            y=arr[i];
            break;
        }
        else if(x%arr[i]!=0){
            y=arr[i];
            break;
        }
    }
    cout<<x<<" "<<y;
    return 0;
}