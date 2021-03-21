#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    int m;
    cin>>m;
    int c1 = pow(n/2,2)+pow(d/2,2);
    int c2 = pow(n,2)+pow(n-d,2);
    while(m--){
        int x,y;
        cin>>x>>y;
        int l = pow(x,2)+pow(y,2);
        if((x+y>=d && x+y<=2*n-d) && (x-y>=-d && x-y<=d)){
           cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }   
    }
    return 0;
}
