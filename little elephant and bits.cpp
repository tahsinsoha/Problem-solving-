#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{
    string s;
    int flag=0;
    cin>>s;
    int j = -1;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
        {
            j=i;
            break;

        }
    }

    if(j==-1){
        for(int i=0;i<s.size()-1;i++)
            cout<<s[i];

        cout<<endl;
        return 0;
    }

    else {

        for(int i=0;i<s.size();i++){
            if(i!=j) cout<<s[i];
        }
        cout<<endl;
        return 0;
    }

    return 0;
}








