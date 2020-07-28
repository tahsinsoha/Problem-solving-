#include<bits/stdc++.h>
using namespace std;
int cnt[200007];
int arr[200007];
int main()
{
    int n,f;
    cin>>n;
    set<int>s;
   for(int i=1;i<=n;i++)
   {

       s.insert(i);

   }
 for(int i=1;i<=n;i++)
   {

    cin>>arr[i];
    if(arr[i]!=0) s.erase(arr[i]);

   }

vector<int>v(s.begin(),s.end());
int now=0;
 for(int i = 1;i<=n;i++){
        if(arr[i]==0){
            if(v[now]==i){
                if(now==s.size()-1)swap(v[now],v[now-1]);
                else swap(v[now],v[now+1]);
            }
            now++;
        }
    }
now =0;

for(int i=1;i<=n;i++){
    if(arr[i]==0){
        cout<<v[now++]<<" ";
    }
else cout<<arr[i]<<" ";
}
cout<<endl;
    return 0;
}
