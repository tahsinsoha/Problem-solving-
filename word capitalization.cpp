#include<stdio.h>
#include<string.h>
int main(){
    int i;
char s[1000];
scanf("%s",s);


    if(s[0]>='a'&&s[0]<='z'){
        s[0]=s[0]-32;
    }
 for(i=0;i<strlen(s);i++) {

    printf("%c\n",s[i]);
 }
return 0;
}
