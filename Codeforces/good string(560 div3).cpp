#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string t="";
    int cnt=0;


    for(int i=0;i<s.size();i++)
    {
        if(t.size()%2==0 || t.back()!=s[i])
            t+=s[i];
    }

    if(t.size()%2)
    {
        t.pop_back();
    }
    cout<<n-t.size()<<endl;
    cout<<t<<endl;
    return 0;

}
















