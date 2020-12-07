#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x, lar=0;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x>lar){
                lar=x;
            }
            v.push_back(x);
        }
        for(int i=0;i<n;i++){
            if(v[i]==lar){
                v[i]=1;
            }
            else{
                v[i]=0;
            }
        }
        int index =-1;
        for(int i=0; i<n-1; i++){
            if((v[i]==0 && v[i+1]==1)){
                index = i+2;
                //flag = 1;
                break;
            }
            else if(v[i]==1 && v[i+1]==0){
                index = i+1;
                //flag = 1;
                break;
            }
        }
        cout<<index<<"\n";
    }
    return 0;
}