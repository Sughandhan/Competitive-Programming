#include<iostream>

using namespace std;

int main(){
    int a;
    int x, y;
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            cin>>a;
            if(a==1){
                x=i;
                y=j;
                break;
            }
        }
        if(a==1){
            break;
        }
    }
    if(x>3){
        x=x-3;
    }
    else{
        x=3-x;
    }
    if(y>3){
        y=y-3;
    }
    else{
        y=3-y;
    }
    cout<<x+y;
    return 0;
}