#include<bits/stdc++.h>
using namespace std;
int main(){
int i;
int arr[100][100];
int j,k;
j=4;
k=0;

for(i=1;i<=25;i++){
if(i%2!=0){
    arr[j][k]=i;
printf("%d  %d  %d \n",i,j,k);
j=j-1;
}
else {

    arr[j][k]=i;;
    printf("%d  %d  %d \n",i,j,k);
    k=k+1;
}


}

return 0;
}
