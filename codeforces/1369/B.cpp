#include<bits\stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, x=0, y=0 ;
        cin>>n;
        string s;
        cin>>s;
        for(long long int i=0;i<n;i++){
            if(s[i]=='0'){
                x++;
            }
            else{
                break;
            }
        }
        for(long long int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                y++;
            }
            else{
                break;
            }
        }
        string ans="";
        for(long long int i=0;i<x+1;i++){
            ans+='0';
        }
        for(long long int i=0;i<y;i++){
            ans+='1';
        }
        if(x+y+1>n){
            cout<<s<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}