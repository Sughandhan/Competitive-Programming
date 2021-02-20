#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    int count=0, candy=0;
    for(int i=0;i<n; i++){
        candy+=arr[i];
        int c= min(8, candy);
        candy=candy-c;
        k=k-c;
        count++;
        if(k<=0){
            break;
        }
    }
    if(k>0){
        cout<<-1;
    }
    else{
        cout<<count;
    }
    return 0;
}
