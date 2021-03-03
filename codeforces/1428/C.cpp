#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> v;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'||v.empty()==1){
                v.push_back(s[i]);
            }
            else{
                v.pop_back();
            }
        }
        cout<<v.size()<<endl;
    }
    return 0;
}