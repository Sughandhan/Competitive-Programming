#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
    int l;
    cin>>l;
    string s;
    cin>>s;
    long long int arr[l], min=1000000000;
    for(int i=0; i<l;i++){
        cin>>arr[i];
    }
    for(int i=0;i<l-1;i++){
        if(s[i]=='R' && s[i+1]=='L'){
            long long int x= (arr[i+1]-arr[i])/2;
            if(min>x){
                min=x;
            }
        }
    }
    if(min==1000000000){
        min=-1;
    }
    cout<<min;
    return 0;
}