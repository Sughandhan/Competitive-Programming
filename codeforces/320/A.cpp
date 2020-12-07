#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char s[1000000];
    cin>>s;
    int x = strlen(s), ind=0, z;
    /*if(x<=3){
        z=atoi(s);
        if(z==111 || z==14 || z==144 || z==1 || z==11 || z==114 || z==141){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        return 0;
    }*/
    int flag =1;
    for(int i=0; i<x; i++){
        if(s[ind]=='1' && s[ind+1]=='4' && s[ind+2]=='4' && ind+2<x){
            //cout<<"a";
            ind+=3;
        }
        else if(s[ind]=='1' && s[ind+1]=='4' && ind+1<x){
            //cout<<"b";
            ind+=2;
        }
        else if(s[ind]=='1' && ind<x){
            //cout<<"c";
            ind+=1;
        }
        else if(ind<x){
            flag = 0;
        }
        if(flag==0){
            cout<<"NO";
            return 0;
        }
        else{
            continue;
        }
    }
    cout<<"YES";
    return 0;
}