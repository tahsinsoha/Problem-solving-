#include<bits/stdc++.h>
using namespace std;
vector<int>v[4];
int main()
{
    int n;
    char c;
    int maxx=0;
//int arr[4];
    for(int i=1; i<=3; i++)
    {
        cin>>n;
        cin>>c;
        if(c=='m')
            v[0].push_back(n);
        if(c=='p')
            v[1].push_back(n);
        if(c=='s')
            v[2].push_back(n);
//if(c=='m') v[0].push_back(n);

    }
    if(v[0].size()>v[1].size()&&v[0].size()>v[2].size())
    {
        sort(v[0].begin(),v[0].end());
        int cont1=1;//shoman
        int cont2=1;
        int cont3=1;
        int maxo=0;
        for(int i=0; i<v[0].size()-1; i++)
        {
            if(v[0][i]==v[0][i+1])
                cont1++;
            else if(v[0][i+1]==v[0][i]+1)
                cont2++;
                 else if(v[0][i+1]==v[0][i]+2){
                        if(cont3==2) continue;
                    cont3++;
                }
        }
        maxo=max(cont1,cont2);
        cout<<3-max(maxo,cont3)<<endl;
        return 0;

    }

    else if(v[1].size()>v[0].size()&&v[1].size()>v[2].size())
    {
        sort(v[1].begin(),v[1].end());
        int cont1=1;//shoman
        int cont2=1;
        int cont3=1;//diff 2
        int maxo = 0;
        for(int i=0; i<v[1].size()-1; i++)
        {
            if(v[1][i]==v[1][i+1])
                cont1++;
            else if(v[1][i+1]==v[1][i]+1)
                cont2++;
                else if(v[1][i+1]==v[1][i]+2){
                        if(cont3==2) continue;
                    cont3++;
                }
        }
        maxo=max(cont1,cont2);
        cout<<3-max(maxo,cont3)<<endl;
        return 0;
    }

    else if(v[2].size()>v[0].size()&&v[2].size()>v[1].size())
    {
        sort(v[2].begin(),v[2].end());
        int cont1=1;//shoman
        int cont2=1;
        int cont3=1;
        int maxo=0;
        for(int i=0; i<v[2].size()-1; i++)
        {
            if(v[2][i]==v[2][i+1])
                cont1++;
            else if(v[2][i+1]==v[2][i]+1)
                cont2++;
                 else if(v[2][i+1]==v[2][i]+2){
                        if(cont3==2) continue;
                    cont3++;
                }
        }
        maxo=max(cont1,cont2);
        cout<<3-max(maxo,cont3)<<endl;
        return 0;

    }
    else cout<<2<<endl;

    return 0;
}
