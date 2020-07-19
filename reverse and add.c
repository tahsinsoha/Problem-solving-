#include<stdio.h>
int reverse(int x);
int main(){
int num1,num2,res1,res2,total;
int n,i,ans;
scanf("%d",&n);
for(i=1;i<=n;i++){
scanf("%d%d",&num1,&num2);
res1=reverse(num1);
res2=reverse(num2);
total=res1+res2;
ans=reverse(total);
printf("%d\n",ans);
}

return 0;
}

int reverse(int x){
 int rem, sum = 0;
    while(x > 0)
    {
        rem = x%10;
        sum = (sum*10) + rem;
        x = x/10;
    }
    return sum;
}

