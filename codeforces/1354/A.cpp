#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<=b){
            cout<<b<<endl;
        }
        else if(c-d<=0){
            cout<<-1<<endl;
            continue;
        }
        else{
            long long int ans=b;
            ans+= (((a-b)+(c-d)-1)/(c-d))*c;
            cout<<ans<<endl;
        }
    }
    return 0;
}