#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0, min = 100;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
                if(count<min){
                    min = count;
                }
            }
            else if(s[i]==')'){
                count--;
                if(count<min){
                    min = count;
                }
            }
        }
        cout<<min*-1<<endl;
    }
    return 0;
}