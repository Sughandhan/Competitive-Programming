#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    string word;
    cin>>n;
    cin>>word;
    int c1=0, c0=0;
    for(int i=0;i<n;i++){
        if(word[i]=='0'){
            c0++;
        }
        else if(word[i]=='1'){
            c1++;
        }
    }
    int x=min(c0,c1);
    cout<<n-(2*x);
    return 0;
}