#include<bits/stdc++.h>
using namespace std;
int main(){
int q;
long long int m,n;
cin>>q;

for(int i=1;i<=q;i++){
    cin>>n>>m;
    n=n/m;
vector<long long int>digit(10);
for(int j=0;j<10;j++){
    digit[j] = ((j+1)*m)%10;

}
long long sum = 0;
for(int k=0;k<(n%10);k++){
    sum = sum + digit[k];
}
cout<<sum+n/10*accumulate(digit.begin(),digit.end(),0LL)<<endl;
}
return 0;
}
