#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,t;
    cin>>n;
    cin>>s>>t;

    vector<int>v1,v2;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=t[i])
        {
            if(s[i]=='a')
                v1.push_back(i+1);
            else
                v2.push_back(i+1);
        }
    }

    if((v1.size()+ v2.size())%2)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(v1.size()%2==0 && v2.size()%2==0)
    {
        cout<<(v1.size()/2 + v2.size()/2)<<endl;

        for(int i=0; i<v1.size(); i+=2)
        {

            cout<<v1[i]<<" "<<v1[i+1]<<endl;
        }

        for(int i=0; i<v2.size(); i+=2)
        {

            cout<<v2[i]<<" "<<v2[i+1]<<endl;
        }
    }

    else
    {

        cout<<((v1.size()+ v2.size())/2+1)<<endl;

        for(int i=0; i<v1.size()-1; i+=2)
        {

            cout<<v1[i]<<" "<<v1[i+1]<<endl;
        }
        cout<<v1[v1.size()-1]<<" "<<v1[v1.size()-1]<<endl;
        cout<<v1[v1.size()-1]<<" "<<v2[0]<<endl;

        for(int i=1; i<v2.size(); i+=2)
        {

            cout<<v2[i]<<" "<<v2[i+1]<<endl;
        }
    }


    return 0;
}
