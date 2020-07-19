#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,cont;
    string s,s2;
    cin>>n;
    cin>>s;
    vector<int>fac;
    for(i=2; i<=sqrt(n); i++)
    {
        if(i==sqrt(n))
        {
            fac.push_back(i);
            continue;
        }
        if(n%i==0)
        {
            fac.push_back(i);
            fac.push_back(n/i);
        }



    }
    sort(fac.begin(),fac.end());




    for(j=0; j<fac.size(); j++)
    {


          for ( k=0, l=fac[j]-1; k<l; k++,l--)
        swap(s[k], s[l]);


    }
    reverse(s.begin(),s.end());
    cout<<s;

    return 0;
}
