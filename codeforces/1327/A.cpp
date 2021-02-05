#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, k;
        cin>>n>>k;
        if(k*k>n){
            cout<<"No"<<endl;
        }
        else if(k%2==0){
            if(n%2==0){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            if(n%2!=0){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}