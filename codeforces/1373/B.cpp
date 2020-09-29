#include<iostream>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string word;
        cin>>word;
        int z_c=0, o_c=0;
        for(int i=0;i<word.length();i++){
            if(word[i]=='0'){
                z_c++;
            }
            else{
                o_c++;
            }
        }
        int count=0;;
        for(int i=0;i<word.length();i++){
            if(z_c==0 || o_c==0){
                break;
            }
            z_c--;
            o_c--;
            count++;
        }
        if(count%2==0){
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }
    }
    return 0;
}