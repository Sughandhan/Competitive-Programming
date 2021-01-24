#include <iostream>
#include <vector>

using namespace std;
 
int main(){

    long long int a,b;
    vector<long long int> v;
 
    cin>>a>>b;
    for (int i=1;i<=a;i++)
    {
        v.push_back(i);
    }
    long long int n=a+b+1;
    v.push_back(n);
    for (int i=1;i<=b;i++){
        v.push_back(n-i);   
    }
 
    for (int i=0;i<v.size();i++)
    {
        if (i)cout<<" ";
        cout<<v[i];
    }
    cout<<endl;
 
    cin.get();
    cin.get();
    return 0;
    
}