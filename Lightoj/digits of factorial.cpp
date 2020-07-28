#include<bits/stdc++.h>
using namespace std;
double logi[1000005];
int main(){
 long long int casee,base,n,ans;
//long long int logi[1000010];
//logi[0]=0;
for(int i=1;i<=1000000;i++){
       logi[i]=log(i)+logi[i-1];
}
cin>>casee;
for(int j=1;j<=casee;j++){
      cin>>n>>base;
ans=logi[n]/log(base)+1;
cout<<"Case "<<j<<": "<< ans<<endl;

}

return 0;
}

