#include<bits/stdc++.h>
# define f first
# define s second
int cnt[5005];
using namespace std;
int main(){
int n,c;
cin>>n>>c;
pair<int,int> arr[5005];
//int cnt[n+5];
bool here=true;
for(int i=0;i<n;i++){
    cin>>arr[i].f;
     arr[i].s=i;
    cnt[arr[i].f]++;
    if(cnt[arr[i].f]>c)
        {
    cout<<"NO"<<endl;
    return 0;
}
}

sort(arr,arr+n);
int clr[n+5],p=1;
for(int i=0;i<n;i++){
if(p>c) p=1;
clr[arr[i].s]=p;
p++;
}
cout<<"YES"<<endl;
for (int i=0;i<n;i++){
cout<<clr[i]<<' ';
}


return 0;
}
