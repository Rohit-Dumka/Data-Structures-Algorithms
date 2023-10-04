Quick Sort Pivot Algorithm: 

Step 1 − Choose the highest index value has pivot
Step 2 − Take two variables to point left and right of the list excluding pivot
Step 3 − left points to the low index
Step 4 − right points to the high
Step 5 − while value at left is less than pivot move right
Step 6 − while value at right is greater than pivot move left
Step 7 − if both step 5 and step 6 does not match swap left and right
Step 8 − if left ≥ right, the point where they met is new pivot

Quick Sort Algorithm

Step 1 − Make the right-most index value pivot
Step 2 − partition the array using pivot value
Step 3 − quicksort left partition recursively
Step 4 − quicksort right partition recursively


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
