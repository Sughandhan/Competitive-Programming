#include<iostream>
#include<algorithm>
#include<vector>
 
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n, k;
        cin>>n>>k;
        cout<< k+ (k-1)/(n-1)<<endl;
    }
    return 0;
}