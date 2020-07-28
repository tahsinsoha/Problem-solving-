#include<bits/stdc++.h>
using namespace std;
int main(){

int i,j,n;
int arr[105][105];
int sum=0;

scanf("%d",&n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){

        scanf("%d",&arr[i][j]);
        if(i==j){sum=sum+arr[i][j];}
    }


}
printf("%d\n",sum);



return 0;
}
