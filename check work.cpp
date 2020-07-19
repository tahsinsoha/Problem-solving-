#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
int a,b,count=0;
char c;
char str[1000];
   while( scanf("%d%c%d=%s",&a,&c,&b,str)==4){
    if(strcmp(str,"?")==0)
    {
        continue;
    }
    else if(c=='+'&&((a+b)==(atoi(str)))) count++;
    else if(c=='-'&&((a-b)==(atoi(str)))) count++;
}
printf("%d\n",count);

return 0;
}
