#include<iostream>

using namespace std;

int main(){
    int sum =0, count=0, x;
    for(int i=0; i<5;i++){
        cin>>x;
        sum+=x;
        count++;
    }
    if(sum%count!=0 || sum==0){
        cout<<-1;    
    }
    else{
        cout<<sum/count;
    }
    return 0;
}