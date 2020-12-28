#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i=-1,j=-1,k=-1;
        cin>>n;
        vector<int> v;
        for(int l=0; l<n ; l++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int l=1; l<n-1; l++){
            if(v[l-1]<v[l] && v[l]>v[l+1]){
                i=l;
                j=l+1;
                k=l+2;
                break;
            }
        }
        if(i==-1 || k==-1 || k==-1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<i<<" "<<j<<" "<<k<<endl;
        }
    }
    return 0;
}