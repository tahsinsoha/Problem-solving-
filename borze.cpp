#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
long long int brr[200007];
int main()
{
    string s;

    cin>>s;
    int n = s.size();
    vector<char>v;
    for(int i=0; i<n; i++)
    {

        if(s[i]=='.')
            v.push_back('0');

        else if(s[i]=='-' && s[i+1]=='.')
        {
            v.push_back('1');
            i++;
        }

        else if(s[i]=='-' && s[i+1]=='-')
        {
            v.push_back('2');
            i++;
        }

    }

    for(int i=0;i<v.size();i++) cout<<v[i];

    cout<<endl;
    return 0;
}












