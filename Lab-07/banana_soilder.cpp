#include<bits/stdc++.h>
using namespace std;
int main(){

int k,n,w,sum=0,d;
cin>>k >>n >>w;


for(int i=1;i<=w;i++)
{


sum=sum+i;

}
d=sum*k-n;
if(d<0)
    cout<<"0";
else
cout<<d;


return 0;
}


