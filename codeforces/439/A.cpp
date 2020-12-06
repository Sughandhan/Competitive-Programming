#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int n, d;
    cin>>n>>d;
    vector<int> v;
    int count=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        count+=x;
    }
    int jokes=0;
    if(d<((n-1)*10+ count)){
        jokes = -1;
    }
    else{
        d-=count;
        jokes = d/5;
    }
    cout<<jokes;
    return 0;
}