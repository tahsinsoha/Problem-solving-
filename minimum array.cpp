#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b;
cin>>n;
vector<int>arr;
vector<int>brr;

for(int i=0;i<n;i++){
    cin>>a;
    arr.push_back(a);
   // brr.push_back(b);
}

for(int i=0;i<n;i++){
    cin>>b;
    brr.push_back(b);
   // brr.push_back(b);
}
sort(brr.begin(),brr.end());
for(int i=0;i<n;i++){
  //  cout<<arr[i]<<endl;
  vector<int>:: iterator it;
  it = lower_bound(brr.begin(),brr.end(),n-arr[i]);
  //brr[it-v.begin()]=0;
  cout<<brr[it-brr.begin()]<<endl;
    brr[it-brr.begin()]=0;

}
return 0;
}
