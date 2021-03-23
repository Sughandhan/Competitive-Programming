#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1 || n==2){
        cout<<n;
        return 0;
    }
    long long int arr[n], c=2;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int x=2;
    for(int i=0;i<n-2;i++){
        if((arr[i]+ arr[i+1])==arr[i+2]){
            x++;
        }
        else{
            c=max(c,x);
            x=2;
        }
    }
    c=max(c,x);
    cout<<c;
    return 0;
}