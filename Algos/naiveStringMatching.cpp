#include<bits/stdc++.h>
using namespace std;
void match(string text, string pattern){
 int m = text.length(), n = pattern.length();
 for(int i=0, j=0; i<(m-n+1); i++){
 for(j=0; j<n; j++){
 if( text[i+j]!=pattern[j]) break;
 }
 if(j==n){
 cout<<"found at "<<i<<endl;
 }
 }
}
int main(){
 match("missississppi", "ississppi");
 return 0;
}
