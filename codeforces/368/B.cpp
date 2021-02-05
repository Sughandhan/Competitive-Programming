#include<iostream>
#include<set>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n], num[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<int> s;
    for(int i=n-1;i>=0;i--){
        s.insert(arr[i]);
        num[i]=s.size();
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        cout<<num[x-1]<<endl;
    }
    return 0;
}