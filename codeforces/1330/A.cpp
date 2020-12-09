#include<iostream>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[301];
        for(int i=0; i<201;i++){
            arr[i]=0;
        }
        for(int i=0;i<n;i++){
            int c;
            cin>>c;
            arr[c]++;
        }
        int ind=1;
        while(x){
            while(arr[ind]){
                ind++;
            }
            arr[ind]++;
            x--;
        }
        while(arr[ind]){
            ind++;
        }
        // for(int i=1;x>=0;i++){
        //     if(arr[i]==0){
        //         x--;
        //         if(x<0){
        //             ind = i-1;
        //             break;
        //         }
        //     }
        //     else{
        //         continue;
        //     }
        // }
        if(ind>200){
            ind=201;
        }
        cout<<ind-1<<"\n";
    }
    return 0;
}