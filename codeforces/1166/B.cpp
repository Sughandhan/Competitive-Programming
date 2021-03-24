#include<iostream>

using namespace std;

bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

int isNope(int k){
    int flag=1;
    for(int i=5;i<=k/5;i++){
        int x=k/i;
        if(x*i==k){
            flag=0;
            break;
        }
    }
    return flag;
}

int isDope(int k){
    int flag;
    for(int i=5;i<=k/5;i++){
        int x=k/i;
        if(x*i==k){
            flag=i;
            break;
        }
    }
    return flag;
}

int main(){
    int k;
    cin>>k;
    if(k<25 || isPrime(k)==true || isNope(k)){
        cout<<-1;
    }
    else{
        
        string str="aeiou";
        int index = 0, l = isDope(k);
        for(int i=0;i<l;i++){
            for(int j=0;j<k/l;j++){
                cout<<str[(i+j)%5];
            }
        }
    }
    return 0;
}