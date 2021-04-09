#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n, k;
        cin>>n>>k;
        if(n<k){
            cout<<"NO"<<endl;
        }
        else{
            if(n%2==1 && k%2==1){
                cout<<"YES"<<endl;
                for(long long int i=0;i<k-1;i++){
                    cout<<1<<" ";
                }
                cout<<n-k+1<<endl;
            }
            else if( n%2==1 && k%2==0){
                cout<<"NO"<<endl;
            }
            else if(n%2==0 && k%2==1){
                if(k*2>n){
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                    for(long long int i=0;i<k-1;i++){
                        cout<<2<<" ";
                    }   
                    cout<<n-(k-1)*2<<endl;
                }
            }
            else if( n%2==0 && k%2==0){
                cout<<"YES"<<endl;
                long long int r = n%k, q = n/k;
                for(long long int i=0;i<k-1;i++){
                    cout<<1<<" ";
                }
                cout<<n-k+1<<endl;
            }
        }
    }
	return 0;
}