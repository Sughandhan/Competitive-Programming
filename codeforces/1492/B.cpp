#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n);
        for(int i=0;i<n; i++){
            cin>>p[i];
        }
        vector<int> a;
        set<int> s(p.begin(), p.end());
        for(int l=n-1, r = n; l>=0; --l){
            if(p[l]== *s.rbegin()){
                copy(next(p.begin(), l), next(p.begin(), r), back_inserter(a));
                r=l;
            }
            s.erase(p[l]);
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}