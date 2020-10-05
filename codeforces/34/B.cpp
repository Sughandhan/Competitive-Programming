#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v;
    int arr[n], count =0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            v.push_back(arr[i]);
        }
    }
    sort(v.begin(), v.end());
    int l=v.size();
    for(int i=0;i<l;i++){
        if(m>0){
            count+=v[i];
            m--;
        }
        else{
            break;
        }
    }
    count*=-1;
    cout<<count;
    return 0;
}