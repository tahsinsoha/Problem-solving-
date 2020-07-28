#include <bits/stdc++.h>
using namespace std;
int arr[200007];
int brr[200007];
int crr[200007];
int b[200007];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    int n,m;
    cin>>t;
    while(t--)
    {

        cin>>n>>m;
        map<char,long long int>mpp;
        string s;
        cin>>s;
        int p;


        for(int i=0; i<=n; i++)
        {
            crr[i] =0;
            // mpp[s[brr[i]-1]]++;

        }

        for(int i=0; i<m; i++)
        {
            cin>>brr[i];
            p=brr[i];
            crr[p-1]+=1;
            // mpp[s[brr[i]-1]]++;

        }

        sort(brr,brr+m);


        int sz = brr[m-1];
//cout<<sz<<endl;
        for(int i=sz-2; i>=0; i--)
        {
            crr[i]+=crr[i+1];

        }

//cout<<endl;
        for(int i=0; i<n; i++)
        {
            mpp[s[i]]+= crr[i];

        }

        for(int i=0; i<s.size(); i++)
        {

            mpp[s[i]]++;
        }


        for(char j='a' ; j<='z'; j++)
            cout<<mpp[j]<<" ";

        cout<<endl;

    }

}








