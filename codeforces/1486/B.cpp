#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int x[n], y[n];
        for(long long int i=0; i<n; i++){
            cin>>x[i]>>y[i];
        }
        sort(x, x+n);
        sort(y, y+n);
        if(n%2==0){
            long long int z= n/2, c1, c2;
            c1 = (x[z]-x[z-1]) +1;
            c2 = (y[z]-y[z-1]) +1;
            cout<<c1*c2<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}