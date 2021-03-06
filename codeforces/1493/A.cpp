#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int m = n-k;
        if(m==0){
            m+= k/2;
            cout<<m<<endl;
            if(n==1){
                n=1;
            }
            else{
                int x =(n+1)/2;
                for(int i=x; i< x+m; i++){
                    cout<<i<<" ";
                }
                cout<<endl;
            }
            
        }
        else{
            m+= k- (k+1)/2;
            cout<<m<<endl;
            for(int i=k+1;i<=n;i++){
                cout<<i<<" ";
            }
            for(int i=(k+1)/2;i<k;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}