#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, num;
        cin>>n;
        string s, s1="", s2="";
        cin>>s;
        int flag=0;
        for(int i=0;i<n;i++){
            if(s[i]=='2'){
                if(flag==0){
                    s1+="1";
                    s2+="1";
                }
                else{
                    s1+="0";
                    s2+="2";
                }
            }
            else if(s[i]=='0'){
                s1+="0";
                s2+="0";
            }
            else{
                if(flag==0){
                    s1+="1";
                    s2+="0";
                    flag=1;
                }
                else{
                    s1+="0";
                    s2+="1";
                }
            }
        }
        cout<<s1<<endl;
        cout<<s2<<endl;
    }
	return 0;
}