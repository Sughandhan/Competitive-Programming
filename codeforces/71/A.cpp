#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
    string word;
    int T;
    cin>>T;
    for(int i=0; i<T;i++){
        int count =0;
        cin>>word;
        count= word.size();
        if(count>10){
            cout<<word[0]<<count-2<<word[count-1]<<endl;
        }
        else{
            cout<<word<<endl;
        }
    }
    return 0;
}