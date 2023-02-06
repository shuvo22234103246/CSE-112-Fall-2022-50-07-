#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int i,j;
    cin>>str;
    for(i=0;i<str.size();i=i+2)
    {
        for(j=0;j<str.size()-1;j=j+2)
        {
        if(str[j]>str[j+2])
        {
            swap(str[j],str[j+2]);
        }
        }
    }
    cout<<str<<"\n";

return 0;
}
