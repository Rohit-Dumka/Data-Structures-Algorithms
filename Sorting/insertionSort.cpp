#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={6,3,9,5,2,8};
    int n=sizeof(arr)/sizeof(int);
    
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int j=i-1;
        while(j>=0 && curr<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        //placement
        arr[j+1]=curr;
    }
    
    for(int i:arr)
        cout<<i<<" ";
        
}
