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
            long long int count=0;
            a=a-b;
            count= ((a+c-d-1)/(c-d))*c;
            cout<<b+count<<endl;
        }
    }
    return 0;
}