#include <iostream>
using namespace std;
void countingSort(int a[],int n,int e){
    int count[10]={0};
    int output[n];
    for(int i=0;i<n;i++)
        count[(a[i]/e)%10]++;
    for(int i=1;i<10;i++)
        count[i]+=count[i-1];
    for(int i=n-1;i>=0;i--){
        output[--count[(a[i]/e)%10]]=a[i];
    }
    for(int i=0;i<n;i++)
        a[i]=output[i];
}
void radixSort(int a[],int n){
    int mx=a[0];
    for(int i=0;i<n;i++)
        mx=max(mx,a[i]);
    for(int e=1;mx/e>0;e*=10)
        countingSort(a,n,e);
}

int main() {
    int a[]={319,212,6,8,100,50};
    int n=sizeof(a)/sizeof(int);
    radixSort(a,n);
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
