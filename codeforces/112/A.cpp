#include<iostream>

using namespace std;

int main(){
    string a1, a2;
    int x,y;
    cin>>a1>>a2;
    for(int i=0; i<a1.size();i++){
        if(tolower(a1[i])> tolower(a2[i])){
            cout<<1;
            return 0;
        }
        else if(tolower(a1[i])< tolower(a2[i])){
            cout<<-1;
            return 0;
        }
        else{
            continue;
        }
    }
    cout<<0;
    return 0;
}