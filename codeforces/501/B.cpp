#include<iostream>
#include<map>
#include<cstring>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    map<string, string> Map;
        string s1, s2;
        for(int i=0;i<n;i++){
            cin>>s1>>s2;
            map<string, string>::iterator it;
            int flag=1;
            for(it=Map.begin();it!=Map.end(); it++){
                if(it->second == s1){
                    flag = 0;
                }
            }
            if(flag==1){
                Map[s1] = s2;
            }
            else{
                map<string, string>::iterator it;
                for(it =Map.begin(); it!= Map.end(); it++){
                    if(it->second==s1){
                        it->second = s2;
                    }
                }
            }
        }
    map<string,string>::iterator it;
        cout<<Map.size()<<endl;
        for(it = Map.begin(); it!=Map.end(); it++){
            cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}