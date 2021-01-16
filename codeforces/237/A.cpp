#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[24][60];
    for(int i=0;i<24;i++){
        for(int j=0;j<60;j++){
            arr[i][j]=0;
        }
    }
    int max=-100;
    for(int i=0;i<n;i++){
        int h, m;
        cin>>h>>m;
        arr[h][m]++;
        if(arr[h][m]>max){
            max=arr[h][m];
        }
    }
    cout<<max;
    return 0;
}