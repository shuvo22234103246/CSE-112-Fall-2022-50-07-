#include<iostream>
using namespace std;
int main(){
int a[100],i,n,k,next=0;
cin>>n >>k;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
if(a[k-1]<=a[i]&&a[i]>0)
next++;

cout<<next;
return 0;
}

