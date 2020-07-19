#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<int>v;
    pair<int,int>p[4];
    for(int i=0; i<=3; i++)
    {
        cin>>s;
        p[i]= pair<int,int>(s.size()-2,i);

    }
    sort(p,p+4);
    char a='A';
//cout<< p[0].second<<p[1].second<<p[2].second<<p[3].second<<endl;
//cout<< p[0].first<<p[1].first<<p[2].first<<p[3].first<<endl;
    if ((p[0].first <= (p[1].first)/2 && (p[0].first != p[1].first)) &&  (p[3].first >= 2*p[2].first && (p[3].first != p[2].first)))
        cout<<"C"<<endl;

    else if(p[0].first <= (p[1].first)/2 && (p[0].first != p[1].first))
        cout<< char(a+ p[0].second)<<endl;

    else if(p[3].first >= 2*p[2].first && (p[3].first != p[2].first))
        cout<< char(a+ p[3].second)<<endl;

    else
        cout<<"C"<<endl;

    return 0;
}



