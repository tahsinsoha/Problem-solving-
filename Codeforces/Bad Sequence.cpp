#include<bits/stdc++.h>
using namespace std;
long long arr[507][507];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    stack<char>st1,st2;
    int cnt=0;

    for(int i=0; i<s.size(); i++)
    {
       if(s[i]=='(')
            st1.push(s[i]);
       else{
        if(!st1.empty() )
            st1.pop();
        else
            st2.push(s[i]);

       }

    }
    if((st1.size()==0 && st2.size()==0) || (st1.size()==1 && st2.size()==1) )
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;

}











