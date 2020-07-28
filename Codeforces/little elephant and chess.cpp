#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{
    string s;
    int flag=0;
    for(int i=1; i<=8; i++)
    {
        cin>>s;
         // flag=0;
        for(int j=0; j<7; j++)
        {

           // cout<<s[i]<<" "<<s[i+1]<<endl;
            if(s[j]==s[j+1])
                flag=1;

        }
        if(s[0]==s[7])
            flag=1;

            if(flag==1) break;

           // cout<<flag<<endl;
    }

    if(flag==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}







