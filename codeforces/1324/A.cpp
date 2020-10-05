#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, odd=0, even =0;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            v.push_back(num);
            if(num%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(odd==n || even ==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}