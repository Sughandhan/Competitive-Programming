#include<bits\stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int r,b, d;
        cin>>r>>b>>d;
        int flag=0;
        if(abs(r-b)<=d){
            //cout<<"Check 1";
            cout<<"YES"<<endl;
        }
        else if(d==0 && abs(r-b)>0){
            //cout<<"Check 2";
            cout<<"NO"<<endl;
        }
        else{
            if(r<b){
                if((d+1)*r>=b){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                if((d+1)*b>=r){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}