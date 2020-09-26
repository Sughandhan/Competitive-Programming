#include<iostream>
 
using namespace std;
 
int main(){
    char t;
    cin>>t;
    string word;
    cin>>word;
    string arr1="qwertyuiop";
    string arr2="asdfghjkl;";
    string arr3="zxcvbnm,./";
    for(int i=0;i<word.size();i++){
        int flag=0,x=0,y=0,z=0;
        if(t=='R'){
            while(x++<10){
                if(arr1[x]==word[i]){
                    cout<<arr1[x-1];
                    flag=1;
                }
            }
            if(flag==1){
                continue;
            }
            while(y++<10){
                if(arr2[y]==word[i]){
                    cout<<arr2[y-1];
                    flag=1;
                }
            }
            if(flag==1){
                continue;
            }
            while(z++<10){
                if(arr3[z]==word[i]){
                    cout<<arr3[z-1];
                }
            }
        }
        else{
            if(word[i]=='z'){
                cout<<'x';
                continue;
            }
            if(word[i]=='a'){
                cout<<'s';
                continue;
            }
            if(word[i]=='q'){
                cout<<'w';
                continue;
            }
             while(x++<10){
                if(arr1[x]==word[i]){
                    cout<<arr1[x+1];
                    flag=1;
                }
            }
            if(flag==1){
                continue;
            }
            while(y++<10){
                if(arr2[y]==word[i]){
                    cout<<arr2[y+1];
                    flag=1;
                }
            }
            if(flag==1){
                continue;
            }
            while(z++<10){
                if(arr3[z]==word[i]){
                    cout<<arr3[z+1];
                }
            }
        }
    }
    return 0;
}