#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x, y;
        cin>>x>>y;
        int flag=0;
        if(x==1){
            if(y==1){
                flag=1;
            }
            else{
                flag=0;
            }
        }
        else if(x==2 && y!=2 && y!=3 && y!=1){
            flag=0;
        }
        else if(x==3 && y!=2 && y!=3 && y!=1){
            flag=0;
        }
        else{
            flag=1;
        }
        if(flag==0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}