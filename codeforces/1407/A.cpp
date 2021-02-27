#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n], o=0, z=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==1){
                o++;
            }
            else{
                z++;
            }
        }
        if(z>=n/2){
            cout<<z<<endl;
            for(int i=0;i<z;i++){
                cout<<0<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<o-o%2<<endl;
            for(int i=0;i<o-o%2;i++){
                cout<<"1"<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}