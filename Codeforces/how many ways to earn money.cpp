#include<bits/stdc++.h>
int main(){
int n,k,i,numb,ans,j;
int arr[105];
int sum=0;
scanf("%d%d",&n,&k);

for(i=0;i<n;i++){
    scanf("%d",&arr[i]);

}
for(i=0;i<n;i++){
ans=k-arr[i];
for(j=i+1;j<n;j++)
if(arr[j]==ans){sum++;}
}
printf("%d\n",sum);
return 0;
}
