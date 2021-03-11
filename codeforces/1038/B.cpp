#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    if(n<=2) cout<<"No";
    else{
        cout<<"Yes"<<endl;
        int x = (n%2==0)? (n/2): ((n+1)/2);
        cout<<1<<" "<<x<<endl;
        cout<<n-1<<" ";
        for(int i=1;i<=n;i++){
            if(i==x) continue;
            cout<<i<<" ";
        }
    }
    return 0;
}