#include<iostream>

using namespace std;

int main(){
    long long int n, k, i=0;
    cin>>n>>k;
    string s;
    cin>>s;
    if(n==1){
        if(k==0){
            cout<<s;
        }
        else{
            cout<<0;
        }
        return 0;
    }
    while(k>0 && i<n){
        if(i==0){
            if(s[i]=='1'){
                i++;
            }
            else{
                s[i]='1';
                i++;
                k--;
            }
        }
        else if(s[i]=='0'){
            i++;
        }
        else{
            s[i]='0';
            i++;
            k--;
        }
    }
        cout<<s;   
    return 0;
}