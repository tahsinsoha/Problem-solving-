#include<stdio.h>
int main(){
int n,i;
int arr[100];
scanf("%d",&n);
for(i=0;n>0;i++){
arr[i]=n%16;
n=(n/16);

}

for(i=(i-1);i>=0;i--){
        if(arr[i]==10) printf("A");
else if(arr[i]==11) printf("B");
else if(arr[i]==12) printf("C");
else if(arr[i]==13) printf("D");
else if(arr[i]==14) printf("E");
else if(arr[i]==15) printf("F");


    else printf("%d",arr[i]);
}





return 0;
}
