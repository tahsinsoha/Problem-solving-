#include<bits/stdc++.h>
using namespace std;
int main(){
int t,tc;
scanf("%d",&t);

for( tc=1;tc<=t;tc++){
    int n,q;
    scanf("%d%d",&n,&q);
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
 printf("Case %d:\n",tc);
 while(q--){
    int a,b;
   scanf("%d%d",&a,&b);
   int r = upper_bound(v.begin(),v.end(),b)-v.begin();

   int l = lower_bound(v.begin(),v.end(),a)-v.begin();
  // cout<<r<<" "<<l<<endl;
printf("%d\n",r-l);
 }


}



return 0;
}
