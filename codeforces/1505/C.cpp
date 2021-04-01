#include<iostream>
#include<algorithm>
#include<cmath>
 
using namespace std;
 
int main(){
    string s;
    cin>>s;
    int x = s.size();
    int arr[x];
    for(int i=0;i<x;i++){
        arr[i] = (s[i]-'A');
    }
    for(int i=2;i<x;i++){
        if((arr[i-2]+arr[i-1])%26!=arr[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}