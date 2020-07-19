#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    int m;
    cin>>m;
vector<int>v;
    for(int i=1;i<=m*10;i++){
           int n=i;
           int cnt=0;
        while(n) {

            n/=5;
            cnt+=n;

        }

      if(cnt==m) v.push_back(i);

    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    cout<<endl;
    return 0;
}









