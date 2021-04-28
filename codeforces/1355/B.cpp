#include<bits\stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, group = 0, idx=0;
        cin>>n;
        vector<long long int> v;
        for(long long int i=0;i<n;i++){
            long long int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(long long int i=0; i<n;i++){
            idx++;
            if(idx==v[i]){
                group++;
                idx = 0;
            }
        }
        cout<<group<<endl;
    }
    return 0;
}