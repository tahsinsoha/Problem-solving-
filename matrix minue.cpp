#include<bits/stdc++.h>
int main(){

int n,m,i,j,k,l,q,r;
int arr1[105][105],arr2[105][105],ans[105][105];
scanf("%d %d",&n,&m);

for(i=0;i<n;i++){
    for(j=0;j<m;j++){

scanf("%d",&arr1[i][j]);
    }
}

for(k=0;k<n;k++){
    for(l=0;l<m;l++){

scanf("%d",&arr2[k][l]);
    }
}

for(i=0;i<n;i++){
    for(j=0;j<m;j++){
            ans[i][j]=arr1[i][j]-arr2[i][j];

printf("%d",ans[i][j]);
if(j!=(m-1)){printf(" ");}
    }
    printf("\n");
}



return 0;
}
