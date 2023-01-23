#include<iostream>
using namespace std;
int main(){
char s[100];
int x=0,i,n;
cin>>n;
for(i=0;i<n;i++){
    cin>>s;
if(s[1]=='+')
    x++;
if(s[1]=='-')
    x--;
}
cout<<x;

return 0;
}


