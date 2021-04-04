#include<iostream>
#include<algorithm>
#include<cmath>
 
using namespace std;
 
int main(){
    int n , one=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==0){
            arr[i]=1;
        }
        else{
            one++;
            arr[i]=-1;
        }
    }
    int max_ending_here=0, max_so_far=0;
    for(int i = 0; i < n; i++){
        max_ending_here += arr[i];

        if(max_ending_here > max_so_far)max_so_far = max_ending_here;

        if(max_ending_here < 0)max_ending_here = 0;

    }
    if(max_so_far==0){
        cout<<one-1;
    }
    else{
        cout<<one + max_so_far;
    }
    return 0;
}