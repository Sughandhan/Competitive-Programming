#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    //cout<<"check1"<<endl;
    while(t--){
        int n;
        cin>>n;
        //cout<<"check2"<<endl;
        int arr[n], odd=0;
        int even=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            //cout<<"check3"<<endl;
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        //cout<<"check4"<<endl;
        sort(arr, arr+n);
        //cout<<"check5"<<endl;
        int flag=0;
        // for(int i=0;i<n-1;i=i+2){
        //     if(arr[i+1]-arr[i]==1 || (arr[i]%2)==(arr[i+1]%2)){
        //         continue;
        //     }
        //     else{
        //         flag=1;
        //         break;
        //     }
        // }
        if(odd%2==0 && even%2==0){
            //cout<<"check6"<<endl;
            cout<<"Yes"<<endl;
        }
        else{
            //cout<<"check7"<<endl;
            for(int i=0;i<n-1;i++){
                //cout<<"check8"<<endl;
                if(arr[i+1]-arr[i]==1){
                    //cout<<"check9"<<endl;
                    flag = 1;
                    break;
                }
            }
            //cout<<"check10"<<endl;
            if(flag==1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;   
            }
            //cout<<"check11"<<endl;
        }
    }
    return 0;
}