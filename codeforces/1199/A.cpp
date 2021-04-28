#include<bits\stdc++.h>

using namespace std;

int main(){
    long long int n, x, y;
    cin>>n>>x>>y;
    vector<long long int> v;
    for(long long int i=0;i<n;i++){
        long long int x;
        cin>>x;
        v.push_back(x);
    }
    for(long long int d=0;d<n;d++){
        long long low = min(x, d);
        long long up = min(y, n-1-d);
        int flag=1;
        for(long long int i=d-low;i<d;i++){
            if(v[i]<=v[d]){
                flag=0;
                break;
            }
            else{
                // cout<<"num1"<<endl;
                // cout<<v[i]<<" "<<v[d]<<endl;
                flag=1;
            }
        }
        if(flag==0){
            continue;
        }
        for(long long int i=d+1;i<=d+up;i++){
            if(v[i]<=v[d]){
                flag=0;
                break;
            }
            else{
                // cout<<"num2"<<endl;
                // cout<<v[i]<<" "<<v[d]<<endl;
                flag=1;
            }
        }
        if(flag==1){
            cout<<d+1<<endl;
            break;
        }
    }
    return 0;
}