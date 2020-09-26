#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int k;
    vector<int> v;
    cin>>k;
    for(int i=0;i<12;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int sum=0, count=0, z=v.size()-1;
    if(k>0){
        int count=0;
        while(z>=0){
            sum+=v[z];
            count++;
            z--;
            if(sum>=k){
                cout<<count;
                return 0;
            }
        }
        cout<<-1;
    }
    else{
        cout<<0;
    }
    return 0;
}