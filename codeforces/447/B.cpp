#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s;
    cin>>s;
    int k;
    long long int count=0;
    cin>>k;
    int arr[27];
    arr[0]=0;
    for(int i=1;i<=26;i++){
        cin>>arr[i];
    }
    for(int i=0;i<s.size();i++){
        int x=s[i];
        x=x-96;
        count+= (i+1)*arr[x];
    }
    sort(arr, arr+27);
    for(int i=1;i<=k;i++){
        count+= (s.size()+i)*arr[26];
    }
    cout<<count;
    return 0;
}