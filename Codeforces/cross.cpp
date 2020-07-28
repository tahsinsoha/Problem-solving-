#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,m;
    cin>>q;
    while(q--)
    {
        cin>>n>>m;
        int arr[n+5][m+5];
        char c;
        memset(arr,0,sizeof(arr));
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
            {
                cin>>c;
                if(c=='.')
                    arr[i][j]=0;
                else
                    arr[i][j]=1;
            }
        int max1=0,max2=0;
        int row[n+5];
        int col[m+5];
        vector<int>r;
          vector<int>co;
        memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));
        for(int i=0; i<n; i++)
        {
            int sum=0;
            for(int j=0; j<m; j++)
            {
                if(arr[i][j]==1)
                    sum++;
            }
            row[i]=sum;
            max1=max(max1,sum);
        }
        for(int i=0; i<n; i++ )
        {
            if(row[i]==max1)
                r.push_back(i);


        }

        for(int j=0; j<m; j++)
        {
            int sum1=0;
            for(int i=0; i<n; i++)
            {
                if(arr[i][j]==1)
                    sum1++;
            }
            col[j]=sum1;
            max2=max(max2,sum1);
        }

           for(int j=0; j<m; j++ )
        {
            if(col[j]==max2)
                co.push_back(j);


        }
     //   sort(v.begin(),v.end());
        int flag=0;
for(int i=0;i<r.size();i++){
    for(int j=0;j<co.size();j++){
        if(arr[r[i]][co[j]]==0) {

            flag=1;
            break;
        }
    }
}

        int ans;
        ans = (n-max1)+(m-max2);
if(flag==1) ans=ans-1;
         cout<<ans<<endl;
    }


    return 0;
}

