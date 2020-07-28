#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int dig1,b1,dig2,b2,i,j,sum1=0,sum2=0,inp1,inp2;

cin>>dig1>>b1;
for(i=dig1-1;i>=0;i--){
        cin>>inp1;
    sum1=sum1+inp1*pow(b1,i);
}
cin>>dig2>>b2;
for(j=dig2-1;j>=0;j--){
        cin>>inp2;
    sum2=sum2+inp2*pow(b2,j);
}
//cout<<sum1<<" "<<sum2<<endl;
if(sum1>sum2) cout<<">"<<endl;
else if(sum1<sum2) cout<<"<"<<endl;
else  cout<<"="<<endl;
return 0;
}
