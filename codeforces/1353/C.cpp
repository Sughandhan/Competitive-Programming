#include<iostream>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int i=1, sum=0, n;
        cin>>n;
        for(long long int k=3;k<=n;k=k+2){
            sum+= i*i*8;
            i++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
