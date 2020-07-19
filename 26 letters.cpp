#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char str[1000];
int arr[26];
scanf("%s",str);
int i,x;
for(i=0;i<26;i++){

    arr[i]=0;
}

for(i=0;i<strlen(str);i++){
    x= str[i]-'a';
    arr[x]++;
}
for(i=0;i<26;i++){

    if(arr[i]==0){

    printf("NO\n");
    return 0;
    }


}
printf("YES\n");


return 0;
}
