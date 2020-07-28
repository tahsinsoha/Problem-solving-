#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int a,b,c,sum1=0,sum2=0,sum3=0;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>a;
    sum1+=a;

}
for(int i=1;i<=n-1;i++){
    cin>>b;
    sum2+=b;

}
for(int i=1;i<=n-2;i++){
    cin>>c;
    sum3+=c;

}
cout<<sum1-sum2<<endl;
cout<<sum2-sum3<<endl;
return 0;
}

