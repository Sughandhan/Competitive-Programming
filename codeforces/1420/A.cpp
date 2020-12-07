#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, flag = 0;
        cin>>n;
        vector<long long int> v;
        long long int x;
        long long int limit = ((n*(n-1))/2) - 1;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        if(n==1){
            cout<<"YES\n";
            continue;
        }
        for(int i=1;i<n;i++){
            if(v[i]>=v[i-1]){
                flag=1;
                break;
            }
        }
        // int count=0, flag=1;
        // for(int i=1;i<n;i++){
        //     for(int j=0; j<n-i; j++){
        //         if(v[j]>v[j+1]){
        //             swap(v[j], v[j+1]);
        //             count++;
        //         }
        //     }
        //     if(count>limit){
        //         flag=0;
        //         break;
        //     }
        // }
        if(flag==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
