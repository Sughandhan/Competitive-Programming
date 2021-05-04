#include<bits\stdc++.h>

using namespace std;

int main() {
    int n=0;
    string ini, fi;
    cin>>ini;
    if(ini[0]=='9'){
        cout<<9;
        n=1;
    }
    else{
        n=0;
    }
    for(long long int i=n;i<ini.size();i++){
        fi = ini[i];
        int l = stoi(fi);
        if(l>=5){
            cout<<9-l;
        }
        else{
            cout<<l;
        }
    }
	return 0;
}