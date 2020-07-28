#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int maxx=0;
    int f=0;
    int w=0;
    int cnt=0;
    for(int i=0; i<s.size(); i++)
    {

        if(s[i]=='(')
        {

            cnt=0;
            f=1;
            // cout<<maxx<<" "<<w<<endl;

        }

        else if(s[i]==')')
        {
            if(s[i-1]!='_' && s[i-1]!='(')
                w++;
            cnt=0;
            f=0;
            // cout<<maxx<<" "<<w<<endl;

        }
        else if(s[i]=='_')
        {
            if(f && s[i-1]!='_' && s[i-1]!='(' && s[i-1]!=')')

                w++;
            cnt=0;


            //cout<<maxx<<" "<<w<<endl;


        }
        else if(f==0)
            cnt++;

        maxx=max(maxx,cnt);


    }

    cout<<maxx<<" "<<w<<endl;
    return 0;

}









