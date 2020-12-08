#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[101];
        for(int i=0;i<101;i++){
            arr[i]=0;
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr[x]++;
        }
        int a,b;
        for(int i=0; i<101;i++){
            if(arr[i]>0){
                arr[i]--;
            }
            else{
                a=i;
                break;
            }
        }
         for(int i=0; i<101;i++){
            if(arr[i]>0){
                arr[i]--;
            }
            else{
                b=i;
                break;
            }
        }
        cout<<a+b<<"\n";
    }
    return 0;
}