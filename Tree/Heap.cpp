//max heap---------------------------

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr{7,10,3,20,13,5};
    int k=3;
    //find 3rd largest element in the array ; which is 7
    priority_queue<int>ans;
    
    for(int i=0;i<arr.size();i++)
    {
        ans.push(arr[i]);
        if(ans.size()>k)
            ans.pop();
    }
    cout<<ans.top();
}
//min heap----------------------------

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{7,10,20,5,13,9};
    priority_queue<int,vector<int>,greater<int>>minh;
    int k=3;
    
    for(int i=0;i<v.size();i++)
    {
        minh.push(v[i]);
        if(minh.size()>k)
            minh.pop();
    }

    //k largest elements 

    while(minh.size()>0)
    {
        cout<<minh.top()<<" ";
        minh.pop();
    }
}

//largest/Greatest/top/ : min heap
//smallest/lowest/closest : max heap

