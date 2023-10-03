#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[high]);
    
    return i;
}
void quickSort(int a[],int low,int high){
    if(low<high){
        int pidx=partition(a,low,high);
        
        quickSort(a,low,pidx-1);
        quickSort(a,pidx+1,high);
    }
}
int main() {
    int arr[]={6,3,9,5,2,8};
    int n=sizeof(arr)/sizeof(int);
    
    quickSort(arr,0,n-1);
    
    for(int i:arr)
        cout<<i<<" ";
        
}
