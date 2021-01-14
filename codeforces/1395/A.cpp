#include<iostream>
#include<algorithm>
 
using namespace std;
 
int pal(long long int r, long long int g, long long int b, long long int w){
    int odd=0;
    if(r%2!=0){
        odd++;
    }
    if(g%2!=0){
        odd++;
    }
    if(b%2!=0){
        odd++;   
        }
    if(w%2!=0){
        odd++;
    }
    if(odd>1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int r, g, b, w;
        cin>>r>>g>>b>>w;
        if(r==g && g==b && b==w){
            cout<<"Yes"<<endl;
        }
        else{
            //long long int x= min(r,g);
            //long long int y = min(x, b);
            //r-=y;
            //g-=y;
            //b-=y;
            //w+= 3*y;
            if(pal(r,g,b,w)==1){
                cout<<"Yes"<<endl;
            }
            else if(r>0 && g>0 && b>0 && pal(r-1,g-1,b-1,w+3)==1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}