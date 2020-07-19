#include<bits/stdc++.h>
using namespace std;
void func(int x,int y){
int q,sum=0;
while(y>0){
    q=y/x;
    sum=sum+q;
    y=q;
}
     printf(" %d (%d)",x,sum);
}
int main(){
int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103};
int t,tc,n,m;
cin>>t;
for(int  tc=1;tc<=t;tc++){
cin>>n;
printf("Case %d: %d =",tc,n);
for(int i=0;arr[i]<=n;i++){
m=arr[i];
if(i!=0) cout<<" *";
func(m,n);
}
cout<<endl;
}


return 0;
}
