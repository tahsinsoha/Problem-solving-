
Rim Chowdhury
Wed, 13 Feb, 15:53 (12 days ago)
to me

COMBINATION

#include<bits/stdc++.h>
using namespace std;
int n,r;
char ans[25],s[25];
void combination(int indexcur,int indextaken)
{
    if(indextaken==r)
    {
        printf("%s\n",ans);
       return;
    }
    if (indexcur==n)
        return;
    ans[indextaken]=s[indexcur];
    combination(indexcur+1,indextaken+1);
    combination(indexcur+1,indextaken);

    }
int main()
{
    int t;
    cin>>t;
    while(t--){
    cin>>s>>r;
    n=strlen(s);
    ans[r]='\0';
    combination(0,0);
    }

}

