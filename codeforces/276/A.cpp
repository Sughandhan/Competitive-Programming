#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int joy[n];
    int f, t;
    for(int i=0;i<n; i++){
        cin>>f>>t;
        if(t<=k){
            joy[i] = f;
        }
        else{
            joy[i] = f-(t-k);
        }
    }
    sort(joy, joy+n);
    cout<<joy[n-1];
    return 0; 
}