#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>p1,pair<int,int>p2){
    double v1=(double)p1.first/p1.second;
    double v2=(double)p2.first/p2.second;
    
    return v1>v2;
}
int main() {
int n;
cin>>n;

vector<pair<int,int>>a(n);
for(int i=0;i<n;i++){
    cin>>a[i].first>>a[i].second;
}
int w;
cin>>w;

sort(a.begin(),a.end(),compare);
int ans=0;
for(int i=0;i<n;i++){
    if(w>a[i].second){
        ans+=a[i].first;
        w-=a[i].second;
        continue;
    }
    double vw=(double)a[i].first/a[i].second;
    ans+=vw*w;
    w=0;
    break;
}
cout<<ans<<endl;
}

//-------------------------------------------------------------------------
//-------------------------------------------------------------------------

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Item{
    int value;
    int weight;
};
double fractionalKnapsack(int W,Item arr[],int n){
    vector<pair<double,int>>v;
    for(int i=0;i<n;i++){
        double x=(arr[i].value*1.0)/(arr[i].weight*1.0);
        v.push_back({x,i});
    }
    sort(v.begin(),v.end(),greater<pair<double,int>>());
    
    int s=0;
    double ans=0;
    for(int i=0;i<v.size();i++){
        if(s+arr[v[i].second].weight<W){
            ans+=arr[v[i].second].value;
            s+=arr[v[i].second].weight;
        }
        else{
            double x=(W-s)*1.0;
            ans+=(x*v[i].first);
            break;
        }
    }
    return ans;
}
int main() {
    int W=50;
    Item arr[]={{30,5},{20,10},{100,20},{90,30},{160,40}};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    double ans=fractionalKnapsack(W,arr,n);

    cout<<"Maximum Profit : "<<ans;
}
