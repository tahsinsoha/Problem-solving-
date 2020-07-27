#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int a=0,b=0,j=0;
    int maxx= INT_MIN;
    for(int i=0; i<s.size(); i++)
    {

        if(s[i]=='a')
            a++;
        else
            b++;

        if(min(a,b)<=k)
        {
            maxx=max(maxx,a+b);
        }

        else
        {

            if(s[j]=='a')
                a--;
            else
                b--;

            j++;
        }


    }

    cout<<maxx<<endl;

    return 0;
}

