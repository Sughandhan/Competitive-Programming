#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.size();
        if(s[0]==')' || s[l-1]=='('){
            cout<<"No"<<endl;
        }
        else{
            int c=0, q=0;
            for(int i=0;i<l;i++){
                if(s[i]=='('){
                    c++;
                }
                else if(s[i]==')'){
                    c--;
                }
                else if(s[i]=='?'){
                    q++;
                }
            }
            if((c+q==0 || c-q==0 || (c+q)%2==0) && c<=q){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}