#include<stdio.h>
#include<stdlib.h>
int main(){
int arr[5][5];
int i,j,ans,iv,jv;
for(i=0;i<5;i++){
for(j=0;j<5;j++){

scanf("%d",&arr[i][j]);
if(arr[i][j]==1){
iv=abs(2-i);
jv=abs(2-j);
ans=iv+jv;
}
}
}
/*iv=abs(2-i);
jv=abs(2-j);
ans=iv+jv;*/
printf("%d\n",ans);
return 0;
}
