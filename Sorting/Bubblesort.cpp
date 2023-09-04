#include <iostream>
using namespace std;
int main() {
    int a[]={2,10,8,7};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
    for(int i:a)
        cout<<i<<" ";
}
//----------------------2----------------------
#include <iostream>
using namespace std;
int main() {
    int a[]={2,10,8,7};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
    for(int i:a)
        cout<<i<<" ";
}
//-------------------------3--------------------

#include <iostream>
using namespace std;
int main() {
    int a[]={2,6,8,10,12};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
            break;
    }
    for(int i:a)
        cout<<i<<" ";
}
