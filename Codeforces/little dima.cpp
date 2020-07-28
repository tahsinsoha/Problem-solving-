#include<bits/stdc++.h>
using namespace std;
int main(){
long long a,b,c,x,cont=0;
cin>>a>>b>>c;
vector<long long>v;
for(long long  i=1;i<=81;i++){
long long sx=1,sum=0;
for(long long j=1;j<=a;j++)
    sx=sx*i;
x=sx*b+c;
if(x>0 && x<1000000000){
        long long num=x;
    while(x>0){
      sum=sum+x%10;
      x=x/10;
    }
    if(sum==i){
            cont++;
      v.push_back(num);
    }
}
}
cout<<cont<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
return 0;
}
