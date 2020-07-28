#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
 long long int n,r1,r2,i;
cin>>s;
n=s.size();
long long int sum[n];
sum[0]=0;
for(i=0;i<s.size()-1;i++){

    if(s[i]==s[i+1]){
          sum[i+1]=sum[i]+1;

       }
       else sum[i+1]=sum[i];
}

cin>>n;
for(i=0;i<n;i++){

    cin>>r1>>r2;
cout<<sum[r2-1]-sum[r1-1]<<endl;

}




return 0;
}
