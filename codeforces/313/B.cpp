#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    int l, r, arr[100010];
    int count=0;
    for(int i=1;i<s.size(); i++){
        if(s[i]==s[i-1]){
            count++;
        }
        arr[i]=count;
    }
    for(int i=0;i<n;i++){
        cin>>l>>r;
        cout<<arr[r-1]-arr[l-1]<<endl;
    }
    return 0;
}