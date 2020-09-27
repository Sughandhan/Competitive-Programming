#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        int sum=0;
        while(num>0){
            if(num<10){
                sum+=num;
                break;
            }
            sum+=(num/10)*10;
            num=(num%10)+(num/10);
        }
        cout<<sum<<endl;
    }
    return 0;
}