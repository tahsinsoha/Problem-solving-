#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num=0;
    int n;
    while(cin>>n && n)
    {
        if(num)
            cout<<endl;
        num++;
        int f=0;
        //cout<<n<<endl;
        for(int i=12345; i<=98765; i++)
        {
            //cout<<i<<" "<<n<<endl;

            if(i%n)
                continue;
            int x = i/n;
            set<int>st;
            if(x<10000)
                st.insert(0);
            int j=i;
            int k=x;

            while(j)
            {
                st.insert(j%10);
                j/=10;
            }
            while(k)
            {
                st.insert(k%10);
                k/=10;
            }
            //cout<<st.size()<<" "<<x<<" "<<j<<endl;

            if(st.size()==10)
            {
                f=1;
               if(x<10000) cout<<i<<" / 0"<<x<<" = "<<n<<endl;
               else cout<<i<<" / "<<x<<" = "<<n<<endl;


            }

        }

        if(f==0)
        {
            cout<<"There are no solutions for "<<n<<"."<<endl;

        }

    }
    return 0;

}

