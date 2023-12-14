#include <iostream>
using namespace std;
int knapSack(int w[],int v[],int n,int k){
    if(n==0 || k==0)
        return 0;
    if(w[n-1]>k)
        return knapSack(w,v,n-1,k);
    else
        return max(knapSack(w,v,n-1,k),v[n-1]+knapSack(w,v,n-1,k-w[n-1]));
}
int main() {
    int v[] = {70, 20, 50};
    int w[] = {11, 12, 13};
    int n=sizeof(w)/sizeof(w[0]);
    int k=30;
    int ans=knapSack(w,v,n,k);
    cout<<"max profit: "<<ans;
}
