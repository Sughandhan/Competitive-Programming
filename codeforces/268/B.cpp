#include<iostream>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int ans = 0, j=1;
    for(int i=n-1; i>=1; i--){
        ans+= i*j +1;
        j++;
    }
    ans++;
    cout<<ans;
    return 0;
}