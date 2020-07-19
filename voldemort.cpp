#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,tc;
   scanf("%d ",&n);

    //  char s[100],r[100];

    string s,r;

    set<char>st,t;
   // char c;
  //  getline(cin,s);
    for(int tc=1; tc<=n; tc++)
    {

        getline(cin,s);
        getline(cin,r);

       // cout<<s<<" "<<r<<endl;

        //cout<<s<<" "<<r<<endl;
        int flag=0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=' ')
                st.insert(tolower(s[i]));

        }

        for(int i=0; i<r.size(); i++)
        {
            if(r[i]!=' ')
                t.insert(tolower(r[i]));

        }

        for(auto x:st)
        {

            if(t.find(x)==t.end())
            {
                flag=1;
                printf("Case %d: No\n",tc);
                break;
            }
        }

        if(flag==0)
            printf("Case %d: Yes\n",tc);

        st.clear();
        t.clear();


    }


    return 0;
}
