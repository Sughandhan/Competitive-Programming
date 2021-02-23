#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int p,a, b, c;
        cin>>p>>a>>b>>c;
        long long int a_min=0, b_min=0, c_min=0, j=0;
        if(p>a){
            long long int d= p/a;
            if(p%a==0){
                a_min=0;
            }
            else{
                d++;
                a_min= (d*a)-p;
            }
        }
        else{
            a_min=a-p;
        }
        if(p>b){
            long long int d= p/b;
            if(p%b==0){
                b_min=0;
            }
            else{
                d++;
                b_min= (d*b)-p;
            }
        }
        else{
            b_min=b-p;
        }
        if(p>c){
            long long int d= p/c;
            if(p%c==0){
                c_min=0;
            }
            else{
                d++;
                c_min= (d*c)-p;
            }
        }
        else{
            c_min=c-p;
        }
        cout<<min(a_min,min(b_min, c_min))<<endl;
    }
    return 0;
}