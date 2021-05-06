#include<bits\stdc++.h>

using namespace std;

int main() {
    long long int n, c=0 ;
    cin>>n;
    vector<long long int> v(n);
    for(long long int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    for(long long int i=1; i<n-1;i++){
        if(i==1 && v[i]>v[i-1] && v[i]<v[i+1]){
            c++;
        }
        else{
            if(v[0]< v[i] && v[i]< v[n-1]){
                c++;
            }
        }
    }
    cout<<c;
	return 0;
}