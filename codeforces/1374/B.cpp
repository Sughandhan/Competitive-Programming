#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int count=0;
        long long int num;
        cin>>num;
        while(num!=1){
            if(num%6==0){
                count++;
                num=num/6;
            }
            else{
                if(num%3==0){
                    num=num*2;
                    count++;
                }
                else{
                    count=-1;
                }
            }
            if(count==-1){
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}