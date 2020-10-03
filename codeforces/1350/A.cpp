#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int n, k,min;
        cin>>n>>k;
        if(n%2==0){
            cout<<n+k*2<<endl;
        }
        else{
            for(long int i=3; i<=n;i++){
                if(n%i==0){
                    n=n+i;
                    break;
                }
            }
            n=n+(k-1)*2;
            cout<<n<<endl;
        }
    }
    return 0;
}