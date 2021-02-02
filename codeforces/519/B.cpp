#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    //for(long long int l=0; l<n-1; l++){
        long long int arr1[n-1];
        for(long long int i=0; i<n-1; i++){
            cin>>arr1[i];
        }
        sort(arr1, arr1+n-1);
        long long int i = 0, j = 0, k = 0; 
        while (i < n && j < n-1) { 
  
            // If not common, print smaller 
            if (arr[i] < arr1[j]) { 
                cout << arr[i]<<endl; 
                i++; 
                k++; 
            }    
            else if (arr1[j] < arr[i]) { 
                cout << arr1[j] <<endl; 
                k++; 
                j++; 
            } 
  
            // Skip common element 
            else { 
                i++; 
                j++; 
            } 
        } 
  
        // printing remaining elements 
        while (i < n) { 
        cout << arr[i]<<endl;
            i++; 
            k++; 
        } 
        while (j < n-1) { 
            cout << arr1[j]<<endl; 
            j++; 
            k++; 
        }
        long long int arr2[n-2];
        for(long long int i=0; i<n-2; i++){
            cin>>arr2[i];
        }
        sort(arr2, arr2+n-2);
        i = 0;
        j = 0;
        k = 0; 
        while (i < n-1 && j < n-2) { 
  
            // If not common, print smaller 
            if (arr1[i] < arr2[j]) { 
                cout << arr1[i]<<endl; 
                i++; 
                k++; 
            }    
            else if (arr2[j] < arr1[i]) { 
                cout << arr2[j] <<endl; 
                k++; 
                j++; 
            } 
  
            // Skip common element 
            else { 
                i++; 
                j++; 
            } 
        } 
  
        // printing remaining elements 
        while (i < n-1) { 
        cout << arr1[i]<<endl;
            i++; 
            k++; 
        } 
        while (j < n-2) { 
            cout << arr2[j]<<endl; 
            j++; 
            k++; 
        }
    //}
    return 0;
}