#include<iostream>
#include<cstdlib>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, count=0;
        cin>>n>>k;
        if(k>n){
            for(int i=n;i<k;i++){
                count++;
            }
            //cout<<count<<endl;
        }
        else{
            int x=n, flag = 0;
            if(n%2==k%2){
                count=0;
            }
            else{
                count=1;
            }
            // for(int i=x;i>=0;i--){
            //     if(abs((i-0)-(n-i))==k){
            //         //cout<<count<<endl;
            //         flag = 1;
            //         break;
            //     }
            // }
            // if(flag!=1){
            //     for(int i=x;i>=0;i--){
            //         if(i==k){
            //             break;
            //         }
            //         else{
            //             count++;
            //         }
            //     }
            // }
        }
        cout<<count<<endl;
    }
    return 0;
}