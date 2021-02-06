#include<iostream>
#include<algorithm>
#include<vector>
 
using namespace std;

unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
 
int main(){
    //cout<<"check1"<<endl;
    int n,m,k,x;
    cin>>n>>m>>k;
    //cout<<"check2"<<endl;
    vector<int> v;
    for(int i=0; i<m;i++){
        //cout<<"checka"<<endl;
        cin>>x;
        v.push_back(x);
    }
    //cout<<"check3"<<endl;
    int val, count=0;
    cin>>val;
    //cout<<"check4"<<endl;
    for(int i=0;i<m;i++){
        //cout<<"checkb"<<endl;
        if(countSetBits(val^v[i])<=k){
            //cout<<"checkc"<<endl;
            count++;
        }
    }
    //cout<<"check5"<<endl;
    cout<<count;
    //cout<<"check6"<<endl;
    return 0;
}
