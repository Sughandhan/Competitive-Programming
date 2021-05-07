#include<bits\stdc++.h>

using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        map< long long int, long long int> pairs;
        long long int res=0;
        for( long long int i=0 ; i<n ; i++ ){
            long long int x;
            cin>>x;
            x=x-i;
            res += pairs[x];
            pairs[x]++;
            
        }
        cout<<res<<endl;
    }
	return 0;
}