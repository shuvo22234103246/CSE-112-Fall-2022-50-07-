#include<iostream>
#include<string>
using namespace std;
int main(){
int i,n,c=0;
cin>>n;
string s;
cin>>s;
for(i=0;i<n;i++)
    {
    if(s[i]==s[i+1])
    {
        c=c+1;
    }
}
   cout<<c;


return 0;

}

