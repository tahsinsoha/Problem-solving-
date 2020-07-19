#include<bits/stdc++.h>
using namespace std;
int main(){
int t,i,input;
vector<int>a;
cin>>t;

for(i=0;i<t;i++){
        cin>>input;
    a.push_back(input);

}

sort(a.begin(),a.end());
int sum=0;
if(t%2!=0){
    for(int j=0;j<=((t-1)/2);j++){
     sum=sum+ (a[j]/2)+1;
}
}
else {

for(int k=0;k<((t/2)+1);k++){
sum=sum+(a[k]/2)+1;

}
}
cout<<sum;



return 0;
}
