#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>

using namespace std;
 
int main(){
    long long int n, l;
    cin>>n>>l;
    double arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    vector<double> v;
    for(long long int i=0;i<n-1;i++){
        v.push_back((arr[i+1]-arr[i])/2);
    }
    if(arr[0]!=0){
        v.push_back((arr[0]-0));
    }
    if(arr[n-1]!=l){
        v.push_back(l-arr[n-1]);
    }
    sort(v.begin(), v.end());
    long long int x = v.size();
    cout<<fixed<<setprecision(10)<<v[x-1];
    return 0;
}