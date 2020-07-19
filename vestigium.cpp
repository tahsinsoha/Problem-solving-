#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    set<int>st;
    int t,m;
    int arr[100][100];
    cin>>t;

        int dg=0, row=0, col=0;
    for (int tc=1; tc<=t; tc++)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                cin>>arr[i][j];

            }

         dg=0, row=0, col=0;

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                if(j==i)
                    dg+=arr[i][j];

            }


        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                st.insert(arr[i][j]);
            }
            if(st.size()<n)
                row++;
            st.clear();
        }

          st.clear();
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n; i++)
        {
            st.insert(arr[i][j]);
        }
        if(st.size()<n)
            col++;
        st.clear();
    }
    st.clear();

    cout<<"Case "<<"#"<<tc<<": "<<dg<<" "<<row<<" "<<col<<endl;


    }




return 0;
}
