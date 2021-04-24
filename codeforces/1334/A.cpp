#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p,c;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            p.push_back(x);
            c.push_back(y);
        }
        int flag=0;
        if(n==1){
            if(p[0]<c[0]){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            for(int i=0;i<n-1;i++){
                if (p[i+1] < p[i] ||  c[i+1] < c[i] || c[i+1] - c[i] > p[i+1] - p[i] || p[i]<c[i] || p[i+1]<c[i+1]){
				    flag=1;
				    break;
                }
            }
            if(flag==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        
    }
    return 0;
}