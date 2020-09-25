#include<bits/stdc++.h>
using namespace std;
int col[1000007];
int row[1000007];
int h[107][107];

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;
    int l=0,r=0;

    for(int i=0;i<n;i++){
        if(s[i]=='(')
            l++;
        else if(s[i]==')')
            r++;

    }

    int p = n/2-l;
    int z=0;
    int flag=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='(')
            z++;
        else if(s[i]==')')
            z--;

        else {
            if(p){
                s[i]='(',z++,p--;
        }
        else
        {
            s[i]=')',z--;
        }

    }

     if(z==0 && i<n-1||z<0)
        {
            flag=1;
            break;

        }
    }

    if(flag || z || n%2)
    {
        cout<<":("<<endl;
    }
    else
    {
        cout<<s<<endl;
    }



    return 0;

}











