#include<bits/stdc++.h>
using namespace std;
int n=-1;
vector<int> heap;
void upward_heapify(int i){
    if(i>0 && heap[i]>heap[(i-1)/2]){
        swap(heap[i],heap[(i-1)/2]);
        upward_heapify((i-1)/2);
    }
}
void insert(int x){
    n++;
    if(heap.size()==n)
        heap.push_back(x);
    else
        heap[n]=x;
    upward_heapify(n);
}
void downward_heapify(int i){
    int max = i;
    int idx = 2*i+1;
    if(idx<=n && heap[max]<heap[idx])
        max = idx;
    if(idx+1<=n && heap[max]<heap[idx+1])
        max = idx+1;
    if(max!=i){
        swap(heap[i], heap[max]);
        downward_heapify(max);
    }
}
int del(){
    if(n<0) return -1;
    swap(heap[0],heap[n--]);
    downward_heapify(0);
    
    return heap[n+1];
}
int main(){
    int arr[] = {2,4,5,1,8,3,6,4,5,6};
    int ch=1;
    for(int i=0; i<10; i++){
        insert(arr[i]);
    }
    cout<<n<<endl;
    for(int i=0; i<=n; i++){
            cout<<heap[i]<<" , ";
    }
    cout<<endl;
    for(int i=0; i<=n;){
        cout<<endl<<del()<<" , "<<n<<endl;
        for(int j=0; j<=n; j++){
            cout<<heap[j]<<" ";
        }
    }
}
