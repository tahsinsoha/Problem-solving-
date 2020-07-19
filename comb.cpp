#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int l,r;
string s;
char ans[1000];

void comb(int indcur,int indtkn)
{
    if(indtkn==r)
    {
        cout << ans<< endl;
        return ;
    }
    if(indcur==l)
    {
        return ;
    }

    if((l-indcur) < (r-indtkn))
    {
        return ;
    }

    ans[indtkn] = s[indcur];
    comb(indcur+1,indtkn+1);
    comb(indcur+1,indtkn);
}
int main()
{
    cin >> s>>r;
    l = s.size();
    //ans[l]='\0';
    comb(0,0);
}

