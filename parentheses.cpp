/*------------------------------------------------*/
//Problem Setter: Miguel Revilla
//Uva Problem No: 673
//Problem Name  : Parentheses Balance
//Type          : Ad hoc
//Author        : Shipu Ahamed
//University    : BUBT
//E-mail        : shipuahamed01@gmail.com
/*--------------------------------------------*/

#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
using namespace std;
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    getchar();
    while(t--)
    {
        stack<char>st;
        getline(cin,s);
        if(s.compare("n")==0)
        {
            printf("Yesn");
            continue;
        }
        if(s.size()==1||s.size()%2!=0)
        {
            pf("Non");
            continue;
        }
        int f=0,i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='[')
            st.push(s[i]);
            else if(s[i]==')' && !st.empty() && st.top()=='(')
            st.pop();
            else if(s[i]==']' && !st.empty() && st.top()=='[')
            st.pop();
            else
            f=1;
        }
        if(st.empty()&&f==0)
        pf("Yesn");
        else
        pf("Non");
    }
    return 0;
}
