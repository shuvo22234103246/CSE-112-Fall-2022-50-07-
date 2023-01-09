//codefoces problem-71A
// problem name: Way too long Word
#include<stdio.h>
int main(){
int n,i,len=0;
char s1[100];
scanf("%d",&n);
for(i=1;i<=n;i++){
scanf("%s",&s1);

for(i=0;s1[i]!='\0';i++)
len=len+1;

if(len<=10)
printf("%s\n",s1);
else
printf("%c%d%c\n",s1[0],len-2,s1[len-1]);
}

return 0;



}
