#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,a,b;
int sum=0,maximum=0;
cin>>n;
for(int i=1;i<=n;i++)
    {

        cin>>a>>b;
        sum=(sum+b)-a;
        if(maximum<sum)
        maximum=sum;

    }
cout<<maximum;


}
