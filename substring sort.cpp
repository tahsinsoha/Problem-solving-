#include<bits/stdc++.h>
using namespace std;
bool compare(string z,string n)
{
    return z.size()<n.size();
}
int main()
{
    int n,i;
    vector<string>soh;
    string input;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>input;
        soh.push_back(input);
    }
    sort(soh.begin(),soh.end(),compare);
    bool flag=0;
    string a,b;
    for(i=0; i<n-1; i++)
    {
        a=soh[i];
        b=soh[i+1];
        if(b.find(a)==string::npos)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(i=0; i<n; i++)
        {

            cout<<soh[i]<<endl;
        }

    }

    return 0;
}
