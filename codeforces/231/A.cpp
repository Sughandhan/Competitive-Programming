#include<iostream>

using namespace std;

int main(){
    
    int n, total=0;
    cin>>n;
    for(int i=0;i<n; i++){
        int count=0, yn;
        for(int j=0;j<3;j++){
            cin>>yn;
            count+=yn;
        }
        if(count>1){
            total++;
        }
    }
    cout<<total;
    return 0;
}