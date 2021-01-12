#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=n/4;
        if(n%4!=0){
            k++;
        }
        for(int i=0;i<n-k; i++){
            cout<<9;
        }
        for(int i=0;i<k;i++){
            cout<<8;
        }
        cout<<endl;
    }
    return 0;
}