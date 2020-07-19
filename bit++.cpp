#include<stdio.h>
#include<string.h>
int main(){
int i,j;
int x=0;
char s[150];
scanf("%d",&i);
for(j=1;j<=i;j++){
scanf("%s",s);
if(strcmp(s,"++X")==0||strcmp(s,"X++")==0){
x=x+1;
}
else {x=x-1;}

}
printf("%d",x);
return 0;
}
