#include<iostream>

using namespace std;

int main(){
    string s,t,p;
    cin>>s>>t;
    p=s;
    int n=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]){
            if(n%2==0){
                p[i]=s[i];
                n++;
            }
            else{
                p[i]=t[i];
                n++;
            }
        }
    }
    if(n%2==1){
        cout<<"impossible";
    }
    else{
        cout<<p;   
    }
    return 0;
}