#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(){
    int q;
    cin>>q;
    while(q--){
        string s,t;
        cin>>s>>t;
        int l1= s.size(), l2=t.size();
        int j=min(l1,l2), k=max(l1,l2);
        for(int i=j; i<10000;i=i+j){
            if(i%k==0){
                k=i;
                break;
            }
        }
        int x=(k/l1), y=(k/l2);
        string ap=s, gp=t;
        for(int i=1;i<x;i++){
            ap+=s;
        }
        for(int i=1;i<y;i++){
            gp+=t;
        }
        if(ap==gp){
            cout<<ap<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}