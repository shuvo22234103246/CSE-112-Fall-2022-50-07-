#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,sum=0,d=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
        {
       sum=sum+i;
        }
d=sum*k-n;


cout<<d;

    return 0;
}

