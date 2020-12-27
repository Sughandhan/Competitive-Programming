#include<iostream>
#include<vector>
#include<algorithm>
#include<limits>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum =0, last =9, index =0;
        vector<int> v;
        while(sum<n && last>0){
            v.push_back(min(n-sum, last));
            sum+=last;
            last--;
            index++;
        }
        if(sum < n){
            cout<<-1<<endl;
        }
        else{
            reverse(v.begin(), v.end());
            for(int i=0;i<index;i++){
                cout<<v[i];
            }
            cout<<endl;
        }
    }
    return 0;
}