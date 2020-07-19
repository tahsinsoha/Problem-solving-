#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j;
    cin>>n>>k;
    string s;
    cin>>s;
    map<string,int>mpp;
    for( i=0; i<=s.size()-k; i++)
    {
        string st=s.substr(i,k);
        int flag=0;
       // cout<<st<<endl;
        for( j=0; j<k-1; j++)
        {
            if(st[j]!=st[j+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            mpp[st]++;
           // i=i+k-1;
        }
        i=i+j;
    }
    int ans=0;
    map<string,int> :: iterator it;

    for(it=mpp.begin(); it!=mpp.end(); ++it)
        ans=max(it->second, ans);
    cout << ans;
    return 0;
}
