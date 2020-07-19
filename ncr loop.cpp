#include<bits/stdc++.h>
using namespace std;
int main(){
int n,r;
int arr[100][100];
cin>>n>>r;
for(int i=1;i<=n;i++){
for(int j=1;j<=r;j++){
     if(j==1) arr[i][j]=i;
     else if(j==i) arr[i][j]=1;
     else if(j>i) arr[i][j]=0;
      else arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
}

}
cout<<arr[n][r]<<endl;
return 0;
}
