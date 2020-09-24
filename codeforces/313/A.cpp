#include<iostream>
#include<vector>

using namespace std;

int main(){
    int num;
    cin>>num;
    if(num>=0){
        cout<<num;
    }
    else{
        int n1=num/10;
        int n2= num/100*10 + num%10;
        cout<<max(n1,n2);
    }
    return 0;
}