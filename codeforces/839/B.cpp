#include<iostream>
 
using namespace std;
 
int main(){
    int n, k;
    cin>>n>>k;
    int arr[k];
    int p=4*n;
    int count=0, sum =0;;
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        sum+=x;
        arr[i]=x;
    }
    for(int i=0; i<k;i++){
        count+= (arr[i]+1)/2;
    }
    if(count>p || (k+sum)>=(3*8*n)/2 || ((sum+1)%4==0 && n%2==0 && k%4==0)){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}