#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int a;
    set<int>st;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        while(a%2==0)
            a/=2;
        while(a%3==0)
            a/=3;
        st.insert(a);

    }
    if(st.size()==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
