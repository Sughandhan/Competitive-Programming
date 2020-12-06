#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int x, y, num=0;
        //vector<int> v;
        cin>>x;
        if(x%2==0){
            //if(x%3==0){
              //  y=x/2;
            //}
            //else{
            y=x/2;
            //}
            for(long long int i=y-1;i>=0;i--){
                //num+= 1*pow(10,i);
                cout<<1;
            }
        }
        else{ //if(x%3==0){
            x=x-3;
            y=x/2;
            //num+=7*pow(10,y);
            cout<<7;
            for(long long int i=y-1;i>=0;i--){
                //num+= 1*pow(10,i);
                cout<<1;
            }
        }
        cout<<"\n";
    }
    return 0;
}