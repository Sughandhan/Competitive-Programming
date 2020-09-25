#include<iostream>

using namespace std;

int main(){
    int t, n, a, b;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        int num=97;
        char arr[b];
        for(int i=0;i<b;i++){
            arr[i]=(char)num;
            num++;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i%b];
        }
        cout<<endl;
    }
    
    return 0;
}