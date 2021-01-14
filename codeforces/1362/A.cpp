#include<iostream>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a, b;
        cin>>a>>b;
        int count=0;
        if(a==b){
            count=0;
        }
        if(a>b){
            while(a>b){
                if(a%8==0 && a/8>=b){
                    count++;
                    a=a/8;
                }
                else if(a%4==0 && a/4>=b){
                    count++;
                    a=a/4;
                }
                else if(a%2==0 && a/2>=b){
                    count++;
                    a=a/2;
                }
                else{
                    break;
                }
            }
        }
        else{
            while(b>a){
                if(b%8==0 && b/8>=a){
                    count++;
                    b=b/8;
                }
                else if(b%4==0 && b/4>=a){
                    count++;
                    b=b/4;
                }
                else if(b%2==0 && b/2>=a){
                    count++;
                    b=b/2;
                }
                else{
                    break;
                }
            }
        }
        if(a!=b){
            count=-1;
        }
        cout<<count<<endl;
    }
    return 0;
}