#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    int l[n], r[n], lc=0, rc=0, arr[n];
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
        lc+= l[i];
        rc+= r[i];
        if(l[i]>=r[i]){
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
    }
    //cout<<lc<<" "<<rc<<endl;
    int max_beauty = abs(lc-rc), index=0;
    //cout<<max_beauty<<endl;
    for(int i=0;i<n;i++){
        int x = abs(lc-l[i]+r[i] -(rc-r[i]+l[i]));
        //cout<<x<<endl;
        if(x>max_beauty){
            max_beauty = x;
            index = i+1;
        }
    }
    cout<<index;
    return 0;
}