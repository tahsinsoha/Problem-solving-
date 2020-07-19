#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    int n,k,m;
    string s;

    while(t--)
    {
        int n,k,m;
        cin>>n>>m>>k;


        if(n==0 && m==0)
           cout<< string(k+1,'1')<<endl;
        else if(m==0 &&k==0)
            cout<<string(n+1,'0')<<endl;

        else
        {
            string s = string(k+1,'1')+ string(n+1,'0');
            m--;

            while(m>0)
                s+=s.back()=='0'?'1':'0',m--;

            cout<<s<<endl;

        }




    }
    return 0;
}












