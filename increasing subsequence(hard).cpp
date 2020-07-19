#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<int>r;
    vector<int>l;
    vector<char>v;
    int tr;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        r.push_back(a);
    }
    for(int i=(n-1); i>=0; i--)
    {
        l.push_back(r[i]);
    }
    for(int i =n-1; i>=0; i--)
    {
        if(i==n-1)
        {
            if(r[i]>l[i])
                v.push_back('R');
            else if(l[i]>r[i])
                v.push_back('L');
            int ans1=0,ans2=0,tr1,tr2;
            else
            {
                for(int i=n-2; i>=0; i--)
                {
                    if(r[i+1]<r[i])
                        tr1=r[i],  ans1++;
                    if(l[i+1]<l[i])
                        tr2=l[i],  ans2++;
                }
                if(ans1>ans2)
                {
                    tr=tr1;
                    v.push_back('R');
                    for(int i=1; i<=ans1; i++)
                    {
                        r.pop_back();
                    }
                }
                else
                {
                    tr=tr2;
                    v.push_back('L');
                    for(int i=1; i<=ans2; i++)
                    {
                        l.pop_back();
                    }
                }

            }
        }
        if(r[i]<l[i] && r[i]>tr)
        {
            tr = r[i];
            r.pop_back();
            v.push_back('R');


        }
        else  if(l[i]<r[i] && l[i]>tr)
        {
            tr = l[i];
            l.pop_back();
            v.push_back('L');

        }
        else if(l[i]==r[i])
        }
    return 0;
}
