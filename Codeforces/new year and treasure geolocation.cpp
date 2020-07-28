#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x,y;
cin>>n;
long long int sum1=0 , sum2= 0;
for(int i=0;i< 2*n; i++){
        cin>>x>>y;
    sum1=sum1+ x;
sum2= sum2+y;
}
cout<< sum1/n << " "<<sum2/n<<endl;
return 0;
}
