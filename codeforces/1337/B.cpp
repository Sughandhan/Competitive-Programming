#include<iostream>
 
using namespace std;
 
int main(){
    int t,h,n,m;
    cin>>t;
    while(t--){
        cin>>h>>n>>m;
        int x=0,y=0,flag=0;
        while(h>20 && x<n){
            h=h/2 +10;
            x++;
            // if(h<=0){
            //     flag=1;
            //     break;
            // }
        }
        while(h>0 && y<m){
            h=h-10;
            y++;
            if(h<=0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}