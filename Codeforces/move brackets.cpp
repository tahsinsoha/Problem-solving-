#include<bits/stdc++.h>
using namespace std;
long long arr[2000007];
long long cs[2000007];
long long ps[2000007];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

       int n;
       cin>>n;
       string s;
       cin>>s;

       stack<char>st;
       int cnt=0;

       for(int i=0;i<s.size();i++){


        if(s[i]=='(') st.push(s[i]);

        else if(s[i]==')' ){

            if(!st.empty()) st.pop();
            else cnt++;
        }
       }

       cout<<cnt<<endl;
    }
    return 0;

}













