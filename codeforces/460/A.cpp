#include<iostream>

using namespace std;

int main(){
    int n,m,count =0;
    cin>>n>>m;
    while(n--){
        count++;
        if(count%m==0){
            n++;
        }
    }
    cout<<count;
    return 0;
}