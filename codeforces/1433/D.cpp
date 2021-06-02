#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector< int > v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int index = -20;
        vector< pair<int, int> > pp;
        for(int i=1;i<n;i++){
            if(v[i]!=v[0]){
                index = i;
                pp.push_back( {1, i+1});    
            }
        }
        if(index ==-20){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=1;i<n;i++){
            if(v[i]==v[0]){
                pp.push_back( {i+1, index +1 } );
            }
        }
        cout<<"YES"<<endl;
        for(int i=0;i<pp.size();i++){
            cout<<pp[i].first<<" "<<pp[i].second<<endl;
        }
    }
    return 0;
}