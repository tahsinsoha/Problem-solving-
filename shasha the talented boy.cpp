#include<stdio.h>
#include<string.h>
int main(){
int n,len;
int i,sum=0;
char str[100];
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%s",str);
    len=strlen(str);
if(str[0]=='n'&&str[len-1]=='d'){
    sum=sum+1;

}
}
printf("%d\n",sum);

return 0;
}
