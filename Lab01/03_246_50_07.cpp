#include<iostream>
using namespace std;
int main(){
int n,p,v,t,s,sum=0;
cin>>n;
for(int i=1;i<=n;i++)
{
cin>>p >>v >>t;
s=(p+v+t);
if(s>=2)
    sum++;
}
cout<<sum;
return 0;
}
